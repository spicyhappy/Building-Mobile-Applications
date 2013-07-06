//
//  Student.h
//  Students6
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Declares a student with an init... method.
//

#import <Foundation/Foundation.h>

@interface Student : NSObject {
}

@property (assign, nonatomic, readwrite) int age;
@property (copy, nonatomic, readwrite) NSString *name;

- (id)initWithName:(NSString *)name andAge:(int)age;

@end
