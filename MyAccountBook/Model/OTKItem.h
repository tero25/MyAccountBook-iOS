//
//  OTKItem.h
//  MyAccountBook
//
//  Created by 加藤 大将 on 2014/04/12.
//  Copyright (c) 2014年 Hiromasa Kato. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface OTKItem : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * price;
@property (nonatomic, retain) NSNumber * isDone;
@property (nonatomic, retain) NSDate * dueDate;
@property (nonatomic, retain) NSManagedObject *group;

@end
