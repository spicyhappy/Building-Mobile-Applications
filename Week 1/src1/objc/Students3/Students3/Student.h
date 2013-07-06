//
//  Student.h
//  Students3
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Declares a student with properties.
//

#import <Foundation/Foundation.h>

@interface Student : NSObject {
    int _age;
    NSString *_name;
}

@property (assign, nonatomic, readwrite) int age;
@property (copy, nonatomic, readwrite) NSString *name;

- (int)age;
- (void)setAge:(int)age;

- (NSString *)name;
- (void)setName:(NSString *)name;

@end
