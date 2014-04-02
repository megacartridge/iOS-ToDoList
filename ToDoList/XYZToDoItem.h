//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Bennett Gaddes (2007 Macbook) on 4/1/14.
//  Copyright (c) 2014 Bennett Gaddes. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
