//
//  main.m
//  SingletonPattern
//
//  Created by Liu-Mac on 5/10/17.
//  Copyright © 2017 Liu-Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LCObj1.h"
#import "LCObj2.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        // LCObj1 为纯单例类
        LCObj1 *Obj11 = [LCObj1 new];
        LCObj1 *Obj12 = [[LCObj1 alloc] init];
        LCObj1 *Obj13 = [LCObj1 sharedObj1];
        LCObj1 *Obj14 = [LCObj1 sharedObj1];
        
        NSLog(@"%p %p %p %p", Obj11, Obj12, Obj13, Obj14);
        
        // LCObj2 为灵活的单例类
        LCObj2 *Obj21 = [LCObj2 new];
        LCObj2 *Obj22 = [[LCObj2 alloc] init];
        LCObj2 *Obj23 = [LCObj2 sharedObj2];
        LCObj2 *Obj24 = [LCObj2 sharedObj2];
        
        NSLog(@"%p %p %p %p", Obj21, Obj22, Obj23, Obj24);
        
        [[NSRunLoop currentRunLoop] run];
    }
    return 0;
}
