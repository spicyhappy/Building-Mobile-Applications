//
//  Student.h
//  Students5
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Declares a student with (mostly) synthesized properties.
//

#import <Foundation/Foundation.h>

@interface Student : NSObject {
}

@property (assign, nonatomic, readwrite) int age;
@property (copy, nonatomic, readwrite) NSString *name;

@end
