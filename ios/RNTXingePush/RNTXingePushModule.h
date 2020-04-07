
#import <React/RCTEventEmitter.h>
#import <React/RCTBridgeModule.h>



@interface RNTXingePushModule : RCTEventEmitter 

+ (void)didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

+ (void)didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

@end
