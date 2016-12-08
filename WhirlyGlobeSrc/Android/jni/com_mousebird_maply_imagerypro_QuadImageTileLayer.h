/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_imagerypro_QuadImageTileLayer */

#ifndef _Included_com_mousebird_maply_imagerypro_QuadImageTileLayer
#define _Included_com_mousebird_maply_imagerypro_QuadImageTileLayer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setEnable
 * Signature: (ZLcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setEnable
  (JNIEnv *, jobject, jboolean, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setDrawPriority
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setDrawPriority
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setImageDepth
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setImageDepth
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    getImageDepth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_getImageDepth
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    getCurrentImage
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_getCurrentImage
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setCurrentImageSimple
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setCurrentImageSimple
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setCurrentImages
 * Signature: (IILcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setCurrentImages
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setMaxCurrentImage
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setMaxCurrentImage
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setAllowFrameLoading
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setAllowFrameLoading
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    getFrameStatusNative
 * Signature: ([Z[I)I
 */
JNIEXPORT jint JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_getFrameStatusNative
  (JNIEnv *, jobject, jbooleanArray, jintArray);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setFrameLoadingPriority
 * Signature: ([ILcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setFrameLoadingPriority
  (JNIEnv *, jobject, jintArray, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setColor
 * Signature: (FFFFLcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setColor
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setMaxTiles
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setMaxTiles
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setImportanceScale
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setImportanceScale
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setTextureAtlasSizeNative
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setTextureAtlasSizeNative
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    getBorderTexel
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_getBorderTexel
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setBorderTexel
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setBorderTexel
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setMultiLevelLoads
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setMultiLevelLoads
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    getTargetZoomLevel
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_getTargetZoomLevel
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    reload
 * Signature: (Lcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_reload
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setSimultaneousFetches
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setSimultaneousFetches
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setUseTargetZoomLevel
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setUseTargetZoomLevel
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setSingleLevelLoading
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setSingleLevelLoading
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setHandleEdges
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setHandleEdges
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setCoverPoles
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setCoverPoles
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setVisibility
 * Signature: (DD)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setVisibility
  (JNIEnv *, jobject, jdouble, jdouble);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setInternalImageFormatNative
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setInternalImageFormatNative
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    setShaderNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_setShaderNative
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    nativeShutdown
 * Signature: (Lcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_nativeShutdown
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    initialise
 * Signature: (Lcom/mousebird/maply/CoordSystem;Lcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_initialise
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_dispose
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    nativeStartLayer
 * Signature: (Lcom/mousebird/maply/Scene;Lcom/mousebird/maply/MaplyRenderer;Lcom/mousebird/maply/Point2d;Lcom/mousebird/maply/Point2d;III)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_nativeStartLayer
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject, jint, jint, jint);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    nativeViewUpdate
 * Signature: (Lcom/mousebird/maply/ViewState;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_nativeViewUpdate
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    nativeEvalStep
 * Signature: (Lcom/mousebird/maply/ChangeSet;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_nativeEvalStep
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    nativeRefresh
 * Signature: (Lcom/mousebird/maply/ChangeSet;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_nativeRefresh
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    nativeTileDidLoad
 * Signature: (IIIILandroid/graphics/Bitmap;Lcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_nativeTileDidLoad__IIIILandroid_graphics_Bitmap_2Lcom_mousebird_maply_ChangeSet_2
  (JNIEnv *, jobject, jint, jint, jint, jint, jobject, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    nativeTileDidLoad
 * Signature: (IIII[Landroid/graphics/Bitmap;Lcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_nativeTileDidLoad__IIII_3Landroid_graphics_Bitmap_2Lcom_mousebird_maply_ChangeSet_2
  (JNIEnv *, jobject, jint, jint, jint, jint, jobjectArray, jobject);

/*
 * Class:     com_mousebird_maply_imagerypro_QuadImageTileLayer
 * Method:    nativeTileDidNotLoad
 * Signature: (IIIILcom/mousebird/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_imagerypro_QuadImageTileLayer_nativeTileDidNotLoad
  (JNIEnv *, jobject, jint, jint, jint, jint, jobject);

#ifdef __cplusplus
}
#endif
#endif