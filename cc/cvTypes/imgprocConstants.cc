#include "imgprocConstants.h"

using namespace cv;

void ImgprocConstants::Init(v8::Local<v8::Object> target) {
	FF_SET_CV_CONSTANT(target, MORPH_RECT);
	FF_SET_CV_CONSTANT(target, MORPH_CROSS);
	FF_SET_CV_CONSTANT(target, MORPH_ELLIPSE);

	FF_SET_CV_CONSTANT(target, MORPH_ERODE);
	FF_SET_CV_CONSTANT(target, MORPH_DILATE);
	FF_SET_CV_CONSTANT(target, MORPH_OPEN);
	FF_SET_CV_CONSTANT(target, MORPH_CLOSE);
	FF_SET_CV_CONSTANT(target, MORPH_GRADIENT);
	FF_SET_CV_CONSTANT(target, MORPH_TOPHAT);
	FF_SET_CV_CONSTANT(target, MORPH_BLACKHAT);
#if CV_VERSION_GREATER_EQUAL(3, 1, 0)
	FF_SET_CV_CONSTANT(target, MORPH_HITMISS);
#endif
	FF_SET_CV_CONSTANT(target, BORDER_CONSTANT);
	FF_SET_CV_CONSTANT(target, BORDER_REPLICATE);
	FF_SET_CV_CONSTANT(target, BORDER_REFLECT);
	FF_SET_CV_CONSTANT(target, BORDER_WRAP);
	FF_SET_CV_CONSTANT(target, BORDER_REFLECT_101);
	FF_SET_CV_CONSTANT(target, BORDER_TRANSPARENT);
	FF_SET_CV_CONSTANT(target, BORDER_ISOLATED);
	FF_SET_CV_CONSTANT(target, BORDER_DEFAULT);

	FF_SET_CV_CONSTANT(target, INTER_NEAREST);
	FF_SET_CV_CONSTANT(target, INTER_LINEAR);
	FF_SET_CV_CONSTANT(target, INTER_CUBIC);
	FF_SET_CV_CONSTANT(target, INTER_AREA);
	FF_SET_CV_CONSTANT(target, INTER_LANCZOS4);
	FF_SET_CV_CONSTANT(target, INTER_MAX);
#if CV_VERSION_GREATER_EQUAL(3, 4, 0)
	FF_SET_CV_CONSTANT(target, INTER_LINEAR_EXACT);
#endif
	FF_SET_CV_CONSTANT(target, WARP_FILL_OUTLIERS);
	FF_SET_CV_CONSTANT(target, WARP_INVERSE_MAP);

	FF_SET_CV_CONSTANT(target, THRESH_BINARY);
	FF_SET_CV_CONSTANT(target, THRESH_BINARY_INV);
	FF_SET_CV_CONSTANT(target, THRESH_TRUNC);
	FF_SET_CV_CONSTANT(target, THRESH_TOZERO);
	FF_SET_CV_CONSTANT(target, THRESH_TOZERO_INV);
	FF_SET_CV_CONSTANT(target, THRESH_MASK);
	FF_SET_CV_CONSTANT(target, THRESH_OTSU);
	FF_SET_CV_CONSTANT(target, THRESH_TRIANGLE);

	FF_SET_CV_CONSTANT(target, ADAPTIVE_THRESH_MEAN_C);
	FF_SET_CV_CONSTANT(target, ADAPTIVE_THRESH_GAUSSIAN_C);

	FF_SET_CV_CONSTANT(target, GC_BGD);
	FF_SET_CV_CONSTANT(target, GC_FGD);
	FF_SET_CV_CONSTANT(target, GC_PR_BGD);
	FF_SET_CV_CONSTANT(target, GC_PR_FGD);

	FF_SET_CV_CONSTANT(target, GC_INIT_WITH_RECT);
	FF_SET_CV_CONSTANT(target, GC_INIT_WITH_MASK);
	FF_SET_CV_CONSTANT(target, GC_EVAL);

	FF_SET_CV_CONSTANT(target, TM_SQDIFF);
	FF_SET_CV_CONSTANT(target, TM_SQDIFF_NORMED);
	FF_SET_CV_CONSTANT(target, TM_CCORR);
	FF_SET_CV_CONSTANT(target, TM_CCORR_NORMED);
	FF_SET_CV_CONSTANT(target, TM_CCOEFF);
	FF_SET_CV_CONSTANT(target, TM_CCOEFF_NORMED);

	FF_SET_CV_CONSTANT(target, DFT_INVERSE);
	FF_SET_CV_CONSTANT(target, DFT_SCALE);
	FF_SET_CV_CONSTANT(target, DFT_ROWS);
	FF_SET_CV_CONSTANT(target, DFT_COMPLEX_OUTPUT);
	FF_SET_CV_CONSTANT(target, DFT_REAL_OUTPUT);
	FF_SET_CV_CONSTANT(target, DCT_INVERSE);
	FF_SET_CV_CONSTANT(target, DCT_ROWS);

	FF_SET_CV_CONSTANT(target, HOUGH_STANDARD);
	FF_SET_CV_CONSTANT(target, HOUGH_PROBABILISTIC);
	FF_SET_CV_CONSTANT(target, HOUGH_MULTI_SCALE);
	FF_SET_CV_CONSTANT(target, HOUGH_GRADIENT);

	FF_SET_CV_CONSTANT(target, HISTCMP_CORREL);
	FF_SET_CV_CONSTANT(target, HISTCMP_CHISQR);
	FF_SET_CV_CONSTANT(target, HISTCMP_INTERSECT);
	FF_SET_CV_CONSTANT(target, HISTCMP_BHATTACHARYYA);
	FF_SET_CV_CONSTANT(target, HISTCMP_HELLINGER);
	FF_SET_CV_CONSTANT(target, HISTCMP_CHISQR_ALT);
	FF_SET_CV_CONSTANT(target, HISTCMP_KL_DIV);

	FF_SET_CV_CONSTANT(target, FLOODFILL_FIXED_RANGE);
	FF_SET_CV_CONSTANT(target, FLOODFILL_MASK_ONLY);

	FF_SET_CV_CONSTANT(target, COLOR_BGR2BGRA);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2RGBA);
	FF_SET_CV_CONSTANT(target, COLOR_BGRA2BGR);
	FF_SET_CV_CONSTANT(target, COLOR_RGBA2RGB);
	FF_SET_CV_CONSTANT(target, COLOR_BGR2RGBA);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2BGRA);
	FF_SET_CV_CONSTANT(target, COLOR_RGBA2BGR);
	FF_SET_CV_CONSTANT(target, COLOR_BGRA2RGB);

	FF_SET_CV_CONSTANT(target, COLOR_BGR2RGB);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2BGR);

	FF_SET_CV_CONSTANT(target, COLOR_BGRA2RGBA);
	FF_SET_CV_CONSTANT(target, COLOR_RGBA2BGRA);

	FF_SET_CV_CONSTANT(target, COLOR_BGR2GRAY);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2GRAY);
	FF_SET_CV_CONSTANT(target, COLOR_GRAY2BGR);
	FF_SET_CV_CONSTANT(target, COLOR_GRAY2RGB);
	FF_SET_CV_CONSTANT(target, COLOR_GRAY2BGRA);
	FF_SET_CV_CONSTANT(target, COLOR_GRAY2RGBA);
	FF_SET_CV_CONSTANT(target, COLOR_BGRA2GRAY);
	FF_SET_CV_CONSTANT(target, COLOR_RGBA2GRAY);

	FF_SET_CV_CONSTANT(target, COLOR_BGR2BGR565);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2BGR565);
	FF_SET_CV_CONSTANT(target, COLOR_BGR5652BGR);
	FF_SET_CV_CONSTANT(target, COLOR_BGR5652RGB);
	FF_SET_CV_CONSTANT(target, COLOR_BGRA2BGR565);
	FF_SET_CV_CONSTANT(target, COLOR_RGBA2BGR565);
	FF_SET_CV_CONSTANT(target, COLOR_BGR5652BGRA);
	FF_SET_CV_CONSTANT(target, COLOR_BGR5652RGBA);

	FF_SET_CV_CONSTANT(target, COLOR_GRAY2BGR565);
	FF_SET_CV_CONSTANT(target, COLOR_BGR5652GRAY);

	FF_SET_CV_CONSTANT(target, COLOR_BGR2BGR555);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2BGR555);
	FF_SET_CV_CONSTANT(target, COLOR_BGR5552BGR);
	FF_SET_CV_CONSTANT(target, COLOR_BGR5552RGB);
	FF_SET_CV_CONSTANT(target, COLOR_BGRA2BGR555);
	FF_SET_CV_CONSTANT(target, COLOR_RGBA2BGR555);
	FF_SET_CV_CONSTANT(target, COLOR_BGR5552BGRA);
	FF_SET_CV_CONSTANT(target, COLOR_BGR5552RGBA);

	FF_SET_CV_CONSTANT(target, COLOR_GRAY2BGR555);
	FF_SET_CV_CONSTANT(target, COLOR_BGR5552GRAY);

	FF_SET_CV_CONSTANT(target, COLOR_BGR2XYZ);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2XYZ);
	FF_SET_CV_CONSTANT(target, COLOR_XYZ2BGR);
	FF_SET_CV_CONSTANT(target, COLOR_XYZ2RGB);

	FF_SET_CV_CONSTANT(target, COLOR_BGR2YCrCb);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2YCrCb);
	FF_SET_CV_CONSTANT(target, COLOR_YCrCb2BGR);
	FF_SET_CV_CONSTANT(target, COLOR_YCrCb2RGB);

	FF_SET_CV_CONSTANT(target, COLOR_BGR2HSV);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2HSV);

	FF_SET_CV_CONSTANT(target, COLOR_BGR2Lab);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2Lab);

	FF_SET_CV_CONSTANT(target, COLOR_BGR2Luv);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2Luv);
	FF_SET_CV_CONSTANT(target, COLOR_BGR2HLS);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2HLS);

	FF_SET_CV_CONSTANT(target, COLOR_HSV2BGR);
	FF_SET_CV_CONSTANT(target, COLOR_HSV2RGB);

	FF_SET_CV_CONSTANT(target, COLOR_Lab2BGR);
	FF_SET_CV_CONSTANT(target, COLOR_Lab2RGB);
	FF_SET_CV_CONSTANT(target, COLOR_Luv2BGR);
	FF_SET_CV_CONSTANT(target, COLOR_Luv2RGB);
	FF_SET_CV_CONSTANT(target, COLOR_HLS2BGR);
	FF_SET_CV_CONSTANT(target, COLOR_HLS2RGB);

	FF_SET_CV_CONSTANT(target, COLOR_BGR2HSV_FULL);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2HSV_FULL);
	FF_SET_CV_CONSTANT(target, COLOR_BGR2HLS_FULL);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2HLS_FULL);

	FF_SET_CV_CONSTANT(target, COLOR_HSV2BGR_FULL);
	FF_SET_CV_CONSTANT(target, COLOR_HSV2RGB_FULL);
	FF_SET_CV_CONSTANT(target, COLOR_HLS2BGR_FULL);
	FF_SET_CV_CONSTANT(target, COLOR_HLS2RGB_FULL);

	FF_SET_CV_CONSTANT(target, COLOR_LBGR2Lab);
	FF_SET_CV_CONSTANT(target, COLOR_LRGB2Lab);
	FF_SET_CV_CONSTANT(target, COLOR_LBGR2Luv);
	FF_SET_CV_CONSTANT(target, COLOR_LRGB2Luv);

	FF_SET_CV_CONSTANT(target, COLOR_Lab2LBGR);
	FF_SET_CV_CONSTANT(target, COLOR_Lab2LRGB);
	FF_SET_CV_CONSTANT(target, COLOR_Luv2LBGR);
	FF_SET_CV_CONSTANT(target, COLOR_Luv2LRGB);

	FF_SET_CV_CONSTANT(target, COLOR_BGR2YUV);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2YUV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGR);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGB);

	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGB_NV12);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGR_NV12);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGB_NV21);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGR_NV21);
	FF_SET_CV_CONSTANT(target, COLOR_YUV420sp2RGB);
	FF_SET_CV_CONSTANT(target, COLOR_YUV420sp2BGR);

	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGBA_NV12);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGRA_NV12);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGBA_NV21);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGRA_NV21);
	FF_SET_CV_CONSTANT(target, COLOR_YUV420sp2RGBA);
	FF_SET_CV_CONSTANT(target, COLOR_YUV420sp2BGRA);

	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGB_YV12);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGR_YV12);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGB_IYUV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGR_IYUV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGB_I420);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGR_I420);
	FF_SET_CV_CONSTANT(target, COLOR_YUV420p2RGB);
	FF_SET_CV_CONSTANT(target, COLOR_YUV420p2BGR);

	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGBA_YV12);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGRA_YV12);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGBA_IYUV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGRA_IYUV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGBA_I420);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGRA_I420);
	FF_SET_CV_CONSTANT(target, COLOR_YUV420p2RGBA);
	FF_SET_CV_CONSTANT(target, COLOR_YUV420p2BGRA);

	FF_SET_CV_CONSTANT(target, COLOR_YUV2GRAY_420);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2GRAY_NV21);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2GRAY_NV12);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2GRAY_YV12);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2GRAY_IYUV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2GRAY_I420);
	FF_SET_CV_CONSTANT(target, COLOR_YUV420sp2GRAY);
	FF_SET_CV_CONSTANT(target, COLOR_YUV420p2GRAY);

	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGB_UYVY);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGR_UYVY);

	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGB_Y422);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGR_Y422);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGB_UYNV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGR_UYNV);

	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGBA_UYVY);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGRA_UYVY);

	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGBA_Y422);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGRA_Y422);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGBA_UYNV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGRA_UYNV);

	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGB_YUY2);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGR_YUY2);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGB_YVYU);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGR_YVYU);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGB_YUYV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGR_YUYV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGB_YUNV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGR_YUNV);

	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGBA_YUY2);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGRA_YUY2);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGBA_YVYU);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGRA_YVYU);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGBA_YUYV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGRA_YUYV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2RGBA_YUNV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2BGRA_YUNV);

	FF_SET_CV_CONSTANT(target, COLOR_YUV2GRAY_UYVY);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2GRAY_YUY2);

	FF_SET_CV_CONSTANT(target, COLOR_YUV2GRAY_Y422);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2GRAY_UYNV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2GRAY_YVYU);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2GRAY_YUYV);
	FF_SET_CV_CONSTANT(target, COLOR_YUV2GRAY_YUNV);

	FF_SET_CV_CONSTANT(target, COLOR_RGBA2mRGBA);
	FF_SET_CV_CONSTANT(target, COLOR_mRGBA2RGBA);

	FF_SET_CV_CONSTANT(target, COLOR_RGB2YUV_I420);
	FF_SET_CV_CONSTANT(target, COLOR_BGR2YUV_I420);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2YUV_IYUV);
	FF_SET_CV_CONSTANT(target, COLOR_BGR2YUV_IYUV);

	FF_SET_CV_CONSTANT(target, COLOR_RGBA2YUV_I420);
	FF_SET_CV_CONSTANT(target, COLOR_BGRA2YUV_I420);
	FF_SET_CV_CONSTANT(target, COLOR_RGBA2YUV_IYUV);
	FF_SET_CV_CONSTANT(target, COLOR_BGRA2YUV_IYUV);
	FF_SET_CV_CONSTANT(target, COLOR_RGB2YUV_YV12);
	FF_SET_CV_CONSTANT(target, COLOR_BGR2YUV_YV12);
	FF_SET_CV_CONSTANT(target, COLOR_RGBA2YUV_YV12);
	FF_SET_CV_CONSTANT(target, COLOR_BGRA2YUV_YV12);

	FF_SET_CV_CONSTANT(target, COLOR_BayerBG2BGR);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGB2BGR);
	FF_SET_CV_CONSTANT(target, COLOR_BayerRG2BGR);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGR2BGR);

	FF_SET_CV_CONSTANT(target, COLOR_BayerBG2RGB);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGB2RGB);
	FF_SET_CV_CONSTANT(target, COLOR_BayerRG2RGB);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGR2RGB);

	FF_SET_CV_CONSTANT(target, COLOR_BayerBG2GRAY);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGB2GRAY);
	FF_SET_CV_CONSTANT(target, COLOR_BayerRG2GRAY);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGR2GRAY);

	FF_SET_CV_CONSTANT(target, COLOR_BayerBG2BGR_VNG);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGB2BGR_VNG);
	FF_SET_CV_CONSTANT(target, COLOR_BayerRG2BGR_VNG);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGR2BGR_VNG);

	FF_SET_CV_CONSTANT(target, COLOR_BayerBG2RGB_VNG);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGB2RGB_VNG);
	FF_SET_CV_CONSTANT(target, COLOR_BayerRG2RGB_VNG);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGR2RGB_VNG);

	FF_SET_CV_CONSTANT(target, COLOR_BayerBG2BGR_EA);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGB2BGR_EA);
	FF_SET_CV_CONSTANT(target, COLOR_BayerRG2BGR_EA);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGR2BGR_EA);

	FF_SET_CV_CONSTANT(target, COLOR_BayerBG2RGB_EA);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGB2RGB_EA);
	FF_SET_CV_CONSTANT(target, COLOR_BayerRG2RGB_EA);
	FF_SET_CV_CONSTANT(target, COLOR_BayerGR2RGB_EA);

	FF_SET_CV_CONSTANT(target, COLOR_COLORCVT_MAX);
}
