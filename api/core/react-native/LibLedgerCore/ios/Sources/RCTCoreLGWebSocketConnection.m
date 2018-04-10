// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from websocket_client.djinni

#import "RCTCoreLGWebSocketConnection.h"


@implementation RCTCoreLGWebSocketConnection
//Export module
RCT_EXPORT_MODULE(RCTCoreLGWebSocketConnection)

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImpl = [[LGWebSocketConnection alloc] init];
    }
    return self;
}

RCT_REMAP_METHOD(onConnect,onConnect:(int32_t)connectionId) {

    [self.objcImpl onConnect:connectionId];
}

RCT_EXPORT_METHOD(onClose) {

    [self.objcImpl onClose];
}

RCT_REMAP_METHOD(onMessage,onMessage:(nonnull NSString *)data) {

    [self.objcImpl onMessage:data];
}

RCT_REMAP_METHOD(onError,onError:(LGErrorCode)code
                         message:(nonnull NSString *)message) {

    [self.objcImpl onError:code message:message];
}

RCT_REMAP_METHOD(getConnectionId,getConnectionIdWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :@([self.objcImpl getConnectionId])};if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGWebSocketConnection::getConnectionId", nil);
    }
}
@end
