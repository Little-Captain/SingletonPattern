//
//  Singleton-pure.h
//  singleton
//
//  Created by Liu-Mac on 01/10/2016.
//  Copyright © 2016 LC. All rights reserved.
//

#ifndef _SINGLETON_PURE_H_
#define _SINGLETON_PURE_H_

// interface
#define interfacePureSingleton(Name) +(instancetype)shared##Name;

// implementation
#if __has_feature(objc_arc) // ARC

#define implementationPureSingleton(Name) static id _instanceOf##Name;\
+ (instancetype)allocWithZone:(struct _NSZone *)zone {\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
_instanceOf##Name = [super allocWithZone:zone];\
});\
return _instanceOf##Name;\
}\
+ (instancetype)shared##Name {\
return [self new];\
}\
- (id)copyWithZone:(NSZone *)zone {\
return _instanceOf##Name;\
}\
- (id)mutableCopyWithZone:(NSZone *)zone {\
return _instanceOf##Name;\
}

#else // MRC

#define implementationPureSingleton(Name) static id _instanceOf##Name;\
+ (instancetype)allocWithZone:(struct _NSZone *)zone {\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
_instanceOf##Name = [super allocWithZone:zone];\
});\
return _instanceOf##Name;\
}\
+ (instancetype)shared##Name {\
return [self new];\
}\
- (id)copyWithZone:(NSZone *)zone {\
return _instanceOf##Name;\
}\
- (id)mutableCopyWithZone:(NSZone *)zone {\
return _instanceOf##Name;\
}\
- (oneway void)release {\
return;\
}\
- (instancetype)retain {\
return _instanceOf##Name;\
}\
- (NSUInteger)retainCount {\
return MAXFLOAT;\
}

#endif

#endif /* Singleton-pure.h */
