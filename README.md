# 对单例的宏抽取

## 灵活的单例

* 这种单例为类提供一个 shared 方法
* 类的其他构造方法创建出的实例和单例对象不是同一个对象
* 使用 shared 方法获取的实例是同一个对象

### 使用

* 在.h文件中的代码

```objective-c
#import <Foundation/Foundation.h>
#import "Singleton-flexible.h"

@interface LCObj : NSObject

interfaceFlexibleSingleton(Obj)

@end
```

* 在.m文件中的代码

```objective-c
#import "LCObj.h"

@implementation LCObj

implementationFlexibleSingleton(Obj)

@end
```

## 纯单例

* 通过任何方法创建的对象都是同一个实例
* 同时支持 ARC / MRC

### 使用

* 在.h文件中的代码

```objective-c
#import <Foundation/Foundation.h>
#import "Singleton-pure.h"

@interface LCObj : NSObject

interfacePureSingleton(Obj)

@end
```

* 在.m文件中的代码

```objective-c
#import "LCObj.h"

@implementation LCObj

implementationPureSingleton(Obj)

@end
```

