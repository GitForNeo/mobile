// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `SecretBase.jce'
// **********************************************************************

#import "JceObjectV2.h"
#import "QUANUserId.h"

@interface QUANPostContentReq : JceObjectV2

@property (nonatomic, retain, JV2_PROP_GS_V2(tUserId,setTUserId:)) QUANUserId* JV2_PROP_NM(o,0,tUserId);
@property (nonatomic, assign, JV2_PROP_GS_V2(lSId,setLSId:)) JceInt64 JV2_PROP_NM(o,1,lSId);
@property (nonatomic, assign, JV2_PROP_GS_V2(lFirstId,setLFirstId:)) JceInt64 JV2_PROP_NM(o,2,lFirstId);
@property (nonatomic, retain, JV2_PROP_GS_V2(sContent,setSContent:)) NSString* JV2_PROP_NM(o,3,sContent);

@end
