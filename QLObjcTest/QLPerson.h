//
//  QLPerson.h
//  QLTest
//
//  Created by monan on 2021/6/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QLPerson : NSObject{
    NSString *fullName;
}

@property (nonatomic,copy) NSString *nickName;
@property (nonatomic,assign) NSInteger age;

- (void)test1;
+ (void)test2;


@end

NS_ASSUME_NONNULL_END
