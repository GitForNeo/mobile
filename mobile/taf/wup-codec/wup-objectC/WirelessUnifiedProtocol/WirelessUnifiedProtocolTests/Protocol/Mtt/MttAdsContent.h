// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "JceObjectV2.h"

@interface MttAdsContent : JceObjectV2

@property (nonatomic, assign, JV2_PROP_GS_V2(iId,setIId:)) JceInt32 JV2_PROP_NM(o,0,iId);
@property (nonatomic, assign, JV2_PROP_GS_V2(iStype,setIStype:)) JceInt32 JV2_PROP_NM(o,1,iStype);
@property (nonatomic, retain, JV2_PROP_GS_V2(sContent,setSContent:)) NSString* JV2_PROP_NM(o,2,sContent);
@property (nonatomic, retain, JV2_PROP_GS_V2(sImgName,setSImgName:)) NSString* JV2_PROP_NM(o,3,sImgName);
@property (nonatomic, retain, JV2_PROP_GS_V2(vImg,setVImg:)) NSData* JV2_PROP_NM(o,4,vImg);
@property (nonatomic, assign, JV2_PROP_GS_V2(iImgWidth,setIImgWidth:)) JceInt32 JV2_PROP_NM(o,5,iImgWidth);
@property (nonatomic, assign, JV2_PROP_GS_V2(iImgHeight,setIImgHeight:)) JceInt32 JV2_PROP_NM(o,6,iImgHeight);
@property (nonatomic, assign, JV2_PROP_GS_V2(isArmv7,setIsArmv7:)) JceInt32 JV2_PROP_NM(o,7,isArmv7);

@end