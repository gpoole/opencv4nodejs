const cv = global.dut;
const { assertMetaData, isZeroMat, readTestImage } = global.utils;
const { assert, expect } = require('chai');
const detectorTests = require('./detectorTests');
const KeyPointTests = require('./KeyPointTests');
const DescriptorMatchTests = require('./DescriptorMatchTests');
const descriptorMatchingTests = require('./descriptorMatchingTests');
const BFMatcherTests = require('./BFMatcherTests');

describe('features2d', () => {
  let testImg;
  before(() => {
    testImg = readTestImage().resizeToMax(250);
  });

  KeyPointTests();
  DescriptorMatchTests();
  descriptorMatchingTests(() => testImg);
  BFMatcherTests(() => testImg);

  describe('AGASTDetector', () => {
    const TYPE_DEFAULT = global.utils.cvVersionGreaterEqual(4, 0, 0) ? cv.AGASTDetectorType.OAST_9_16 : 3
    const TYPE_CUSTOM = global.utils.cvVersionGreaterEqual(4, 0, 0) ? cv.AGASTDetectorType.AGAST_7_12d : 1
    const defaults = {
      type: TYPE_DEFAULT,
      nonmaxSuppression: true,
      threshold: 10
    };
    const customProps = {
      args: ['threshold', 'nonmaxSuppression', 'type'],
      values: [50, false, TYPE_CUSTOM]
    };
    const Detector = cv.AGASTDetector;
    detectorTests(() => testImg, defaults, customProps, Detector, false);
  });

  describe('AKAZEDetector', () => {
    const DIFFUSIVITY_DEFAULT = global.utils.cvVersionGreaterEqual(4, 0, 0) ? cv.KAZEDiffusivityType.DIFF_PM_G2 : 1
    const DIFFUSIVITY_CUSTOM = global.utils.cvVersionGreaterEqual(4, 0, 0) ? cv.KAZEDiffusivityType.DIFF_WEICKERT : 2
    const DESCRIPTOR_TYPE_DEFAULT = global.utils.cvVersionGreaterEqual(4, 0, 0) ? cv.AKAZEDescriptorType.DESCRIPTOR_MLDB : 5
    const DESCRIPTOR_TYPE_CUSTOM = global.utils.cvVersionGreaterEqual(4, 0, 0) ? cv.AKAZEDescriptorType.DESCRIPTOR_KAZE_UPRIGHT : 2

    const defaults = {
      diffusivity: DIFFUSIVITY_DEFAULT,
      nOctaveLayers: 4,
      nOctaves: 4,
      threshold: 0.0010000000474974513,
      descriptorChannels: 3,
      descriptorSize: 0,
      descriptorType: DESCRIPTOR_TYPE_DEFAULT
    };
    const customProps = {
      args: ['descriptorType', 'descriptorSize', 'descriptorChannels', 'threshold', 'nOctaves', 'nOctaveLayers', 'diffusivity'],
      values: [DESCRIPTOR_TYPE_CUSTOM, 8, 8, 2 * 0.0010000000474974513, 6, 1, DIFFUSIVITY_CUSTOM]
    };
    const Detector = cv.AKAZEDetector;
    detectorTests(() => testImg, defaults, customProps, Detector);
  });

  describe('BRISKDetector', () => {
    const defaults = {
      patternScale: 1.0,
      octaves: 3,
      thresh: 30
    };
    const customProps = {
      args: ['thresh', 'octaves', 'patternScale'],
      values: [50, 6, 2.4]
    };
    const Detector = cv.BRISKDetector;
    detectorTests(() => testImg, defaults, customProps, Detector);
  });

  describe('FASTDetector', () => {
    const TYPE_DEFAULT = global.utils.cvVersionGreaterEqual(4, 0, 0) ? cv.FASTDetectorType.TYPE_9_16 : 2
    const TYPE_CUSTOM = global.utils.cvVersionGreaterEqual(4, 0, 0) ? cv.FASTDetectorType.TYPE_7_12 : 1

    const defaults = {
      type: TYPE_DEFAULT,
      nonmaxSuppression: true,
      threshold: 10
    };
    const customProps = {
      args: ['threshold', 'nonmaxSuppression', 'type'],
      values: [20, false, TYPE_CUSTOM]
    };
    const Detector = cv.FASTDetector;
    detectorTests(() => testImg, defaults, customProps, Detector, false);
  });

  describe('GFTTDetector', () => {
    const defaults = {
      k: 0.04,
      harrisDetector: false,
      blockSize: 3,
      minDistance: 1,
      qualityLevel: 0.01,
      maxFeatures: 1000
    };
    const customProps = {
      args: ['maxFeatures', 'qualityLevel', 'minDistance', 'blockSize', 'harrisDetector', 'k'],
      values: [2000, 0.04, 2, 6, true, 0.16]
    };
    const Detector = cv.GFTTDetector;
    detectorTests(() => testImg, defaults, customProps, Detector, false);
  });

  describe('KAZEDetector', () => {
    const DIFFUSIVITY_DEFAULT = global.utils.cvVersionGreaterEqual(4, 0, 0) ? cv.KAZEDiffusivityType.DIFF_PM_G2 : 1
    const DIFFUSIVITY_CUSTOM = global.utils.cvVersionGreaterEqual(4, 0, 0) ? cv.KAZEDiffusivityType.DIFF_WEICKERT : 2

    const defaults = {
      diffusivity: DIFFUSIVITY_DEFAULT,
      nOctaveLayers: 4,
      nOctaves: 4,
      threshold: 0.0010000000474974513,
      upright: false,
      extended: false
    };
    const customProps = {
      args: ['extended', 'upright', 'threshold', 'nOctaves', 'nOctaveLayers', 'diffusivity'],
      values: [true, true, 0.0020000000949949026, 8, 8, DIFFUSIVITY_CUSTOM]
    };
    const Detector = cv.KAZEDetector;
    detectorTests(() => testImg, defaults, customProps, Detector);
  });

  describe('MSERDetector', () => {
    const defaults = {
      edgeBlurSize: 5,
      minMargin: 0.003,
      areaThreshold: 1.01,
      maxEvolution: 200,
      minDiversity: 0.2,
      maxVariation: 0.25,
      maxArea: 14400,
      minArea: 60,
      delta: 5
    };
    const customProps = {
      args: ['delta', 'minArea', 'maxArea', 'maxVariation', 'minDiversity', 'maxEvolution', 'areaThreshold', 'minMargin', 'edgeBlurSize'],
      values: [10, 120, 28800, 0.75, 0.4, 400, 2.02, 0.006, 10]
    };
    const Detector = cv.MSERDetector;
    detectorTests(() => testImg, defaults, customProps, Detector, false);
  });

  describe('ORBDetector', () => {
    const SCORE_TYPE_DEFAULT = global.utils.cvVersionGreaterEqual(4, 0, 0) ? cv.ORBScoreType.HARRIS_SCORE : 0
    const SCORE_TYPE_CUSTOM = global.utils.cvVersionGreaterEqual(4, 0, 0) ? cv.ORBScoreType.FAST_SCORE : 1
    const defaults = {
      fastThreshold: 20,
      patchSize: 31,
      scoreType: SCORE_TYPE_DEFAULT,
      WTA_K: 2,
      firstLevel: 0,
      edgeThreshold: 31,
      nLevels: 8,
      scaleFactor: 1.2000000476837158,
      maxFeatures: 500
    };
    const customProps = {
      args: ['maxFeatures', 'scaleFactor', 'nLevels', 'edgeThreshold', 'firstLevel', 'WTA_K', 'scoreType', 'patchSize', 'fastThreshold'],
      values: [1000, 2 * 1.2000000476837158, 16, 62, 2, 3, SCORE_TYPE_CUSTOM, 62, 40]
    };
    const Detector = cv.ORBDetector;
    detectorTests(() => testImg, defaults, customProps, Detector);
  });

  describe('SimpleBlobDetector', () => {
    const Detector = new cv.SimpleBlobDetector(new cv.SimpleBlobDetectorParams());
    detectorTests(() => testImg, null, null, Detector, false);
  });

  describe('drawing', () => {
    let kps;

    before(() => {
      kps = new cv.ORBDetector().detect(testImg);
    });

    it('drawKeyPoints', () => {
      const img = new cv.Mat(testImg.rows, testImg.cols, cv.CV_8UC3, [0, 0, 0]);
      const dst = cv.drawKeyPoints(img, kps);
      expect(dst).instanceOf(cv.Mat);
      assertMetaData(dst)(testImg);
      assert(isZeroMat(dst) === false, 'dst Mat contains zeros only');
    });

    it('drawMatches', () => {
      const desc = new cv.ORBDetector().compute(testImg, kps);
      const matches = cv.matchBruteForce(desc, desc);
      const img = new cv.Mat(testImg.rows, testImg.cols, cv.CV_8UC3, [0, 0, 0]);
      const dst = cv.drawMatches(img, img, kps, kps, matches);
      expect(dst).instanceOf(cv.Mat);
      assertMetaData(dst)(img.rows, img.cols * 2, img.type);
      assert(isZeroMat(dst) === false, 'dst Mat contains zeros only');
    });
  });
});
