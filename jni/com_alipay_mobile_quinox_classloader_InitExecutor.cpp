/* DO NOT EDIT THIS FILE - it is machine generated */
#include "com_alipay_mobile_quinox_classloader_InitExecutor.h"
#include <stdlib.h>
#include <android/log.h>
/* Header for class com_alipay_mobile_quinox_classloader_InitExecutor */
char *dexoptBin = "/bin/dexopt";
void dexopt(const char* apkPath,const char* dexPath,const char* args );
/* Class:     com_alipay_mobile_quinox_classloader_InitExecutor
 * Method:    dexopt
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_alipay_mobile_quinox_classloader_InitExecutor_dexopt
  (JNIEnv *env, jclass clazz, jstring japkPtah , jstring jdexPtah, jstring jargs){

	const char* apkPath = env->GetStringUTFChars(japkPtah, 0);

	const char* dexPath = env->GetStringUTFChars(jdexPtah, 0);
	const char* args = env->GetStringUTFChars(jargs, 0);

dexopt(apkPath,dexPath,args);

	env->ReleaseStringUTFChars( japkPtah, apkPath);
	env->ReleaseStringUTFChars( jdexPtah, dexPath);
	env->ReleaseStringUTFChars( jargs, args);
}


void dexopt(const char* apkPath,const char* dexPath,const char* args ){




	 char* ANDROID_ROOT = getenv("ANDROID_ROOT");
	 	int  sizeANDROID_ROOT=0;
	  if ( ANDROID_ROOT!=NULL )
	  {
		  sizeANDROID_ROOT = strlen(ANDROID_ROOT);
	  }
	  else
	  {
	    _android_log_print(6, "DexInv", "ANDROID_ROOT not set, defaulting to /system");
	    sizeANDROID_ROOT = 7;
	    ANDROID_ROOT = "/system";
	  }


	 int sizedexoptBin = strlen(dexoptBin);
	 char * dest = (char *)malloc(sizedexoptBin + sizeANDROID_ROOT + 1);
	  strcpy(dest, ANDROID_ROOT);
	  strcat(dest, dexoptBin);
	  char* bufApkPath=(char*)malloc(0x68u);
	  memset(&bufApkPath, 0, 0x68u);
	  stat(apkPath, (struct stat *)&bufApkPath);
}

