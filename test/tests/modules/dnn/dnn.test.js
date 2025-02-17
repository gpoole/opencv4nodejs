const cv = global.dut;
const {
  readTestImage,
  generateAPITests,
  assertMetaData
} = global.utils;
const { expect } = require('chai');
const NetTests = require('./NetTests');

describe('dnn', () => {
  if (!cv.xmodules.dnn) {
    it('compiled without dnn');
    return;
  }

  let testImg;

  before(() => {
    testImg = readTestImage().resizeToMax(250);
  });

  NetTests(() => testImg);

  describe('blobFromImage', () => {
    const expectOutput = (res) => {
      expect(res).to.be.instanceOf(cv.Mat);
      assertMetaData(res)(-1, -1, cv.CV_32F);
    };

    const getOptionalArgsMap = () => ([
      ['scalefactor', 0.8],
      ['size', new cv.Size(3, 3)],
      ['mean', new cv.Vec(0.5, 0.5, 0.5)],
      ['swapRB', true]
    ]);

    describe('blobFromImage', () => {
      generateAPITests({
        getDut: () => cv,
        methodName: 'blobFromImage',
        getRequiredArgs: () => ([
          testImg
        ]),
        getOptionalArgsMap: () => ([
          ['scalefactor', 0.8],
          ['size', new cv.Size(3, 3)],
          ['mean', new cv.Vec(0.5, 0.5, 0.5)],
          ['swapRB', true]
        ]),
        expectOutput
      });
    });

    describe('blobFromImages', () => {
      generateAPITests({
        getDut: () => cv,
        methodName: 'blobFromImages',
        getRequiredArgs: () => ([
          [testImg, testImg]
        ]),
        getOptionalArgsMap,
        expectOutput
      });
    });

    describe('blobFromImage', () => {
      generateAPITests({
        getDut: () => cv,
        methodName: 'blobFromImage',
        getRequiredArgs: () => ([
          testImg
        ]),
        getOptionalArgsMap: () => ([
          ['scalefactor', 0.8],
          ['size', new cv.Size(3, 3)],
          ['mean', new cv.Vec(0.5, 0.5, 0.5)],
          ['swapRB', true],
          ['crop', false],
          ['ddepth', cv.CV_32F]
        ]),
        expectOutput
      });
    });
  });

  if (global.utils.cvVersionGreaterEqual(3, 4, 0)) {
    describe('NMSBoxes', () => {
      generateAPITests({
        getDut: () => cv,
        methodName: 'NMSBoxes',
        hasAsync: false,
        getRequiredArgs: () => ([
          [new cv.Rect(0, 0, 1, 1)],
          [1],
          0.5,
          0.4,
        ]),
        expectOutput: (res) => {
          expect(res).to.be.instanceOf(Array);
          expect(res[0]).to.be.equal(0);
        },
      });
    });
  }
});
