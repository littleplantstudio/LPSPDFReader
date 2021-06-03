//
//  LPSConstants.h
//  LPSPDFReader
//
//  Created by Pituk Kaewsuksai on 3/6/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
extern NSString * const kLPSBundleId;


@interface LPSConstants : NSObject

@property (nonatomic, strong) NSBundle *lpsBundle;

+ (instancetype)sharedInstance;
@end

NS_ASSUME_NONNULL_END
