//
//  ToDoItem.h
//  ToDoList
//
//  Created by Derek Lurette on 2015-02-14.
//  Copyright (c) 2015 Derek Lurette. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
