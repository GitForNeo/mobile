// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/taf/upload/renjunyi/MTT.jce'
// **********************************************************************

#import "MttConfRsp.h"

@implementation MttConfRsp

@synthesize JV2_PROP_EX(o,0,vConfInfo,VOMTTConfInfo);
@synthesize JV2_PROP_NM(o,1,iConfTime);

+ (void)initialize
{
    if (self == [MttConfRsp class]) {
        [MttConfInfo initialize];
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(vConfInfo) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"MTT.ConfRsp";
}

@end