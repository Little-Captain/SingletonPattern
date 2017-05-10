//
//  LCObj2.h
//  SingletonPattern
//
//  Created by Liu-Mac on 5/10/17.
//  Copyright © 2017 Liu-Mac. All rights reserved.
//  LCObj2 被定义为灵活单例, 灵活体现在可以通过shared方法获取单例, 也可以通过其他方法创建非单例对象

#import <Foundation/Foundation.h>
#import "Singleton-flexible.h"

@interface LCObj2 : NSObject

interfaceFlexibleSingleton(Obj2)

@end
