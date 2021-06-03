//
//  LPSConstants.m
//  LPSPDFReader
//
//  Created by Pituk Kaewsuksai on 3/6/21.
//

#import "LPSConstants.h"

NSString * const kLPSBundleId = @"com.littleplantstudio.pdfreader";

@implementation LPSConstants


+ (instancetype)sharedInstance
{
    static LPSConstants *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[LPSConstants alloc] init];
        sharedInstance.lpsBundle = [NSBundle bundleWithIdentifier:kLPSBundleId];
    });
    return sharedInstance;
}


@end
