//
//  Singleton-flexible.h
//  singleton
//
//  Created by Liu-Mac on 01/10/2016.
//  Copyright © 2016 LC. All rights reserved.
//

#ifndef _SINGLETON_FLEXIBLE_H_
#define _SINGLETON_FLEXIBLE_H_

// interface
#define interfaceFlexibleSingleton(Name) +(instancetype)shared##Name;

// implementation
#define implementationFlexibleSingleton(Name) static id _instanceOf##Name;\
+ (instancetype)shared##Name {\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
    _instanceOf##Name = [self new];\
});\
return _instanceOf##Name;\
}

#endif /* Singleton-flexible.h */
