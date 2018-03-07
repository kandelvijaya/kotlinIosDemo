#import <Foundation/Foundation.h>

@class KIOSLWords;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
-(instancetype) init __attribute__((unavailable));
+(instancetype) new __attribute__((unavailable));
+(void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
@interface KIOSLMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
@interface KIOSLMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface KIOSLWords : KotlinBase
-(instancetype)init NS_SWIFT_NAME(init()) NS_DESIGNATED_INITIALIZER;

-(NSString*)getWords NS_SWIFT_NAME(getWords());
@end;

NS_ASSUME_NONNULL_END
