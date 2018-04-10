// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from networks.djinni

#import "RCTCoreLGNetworks.h"


@implementation RCTCoreLGNetworks
//Export module
RCT_EXPORT_MODULE(RCTCoreLGNetworks)

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImpl = [[LGNetworks alloc] init];
    }
    return self;
}

RCT_REMAP_METHOD(bitcoin,bitcoinWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[LGNetworks bitcoin]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGNetworks::bitcoin", nil);
    }
}
@end
