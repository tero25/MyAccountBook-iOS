//
//  OTKAppDelegate.h
//  MyAccountBook
//
//  Created by 加藤 大将 on 2014/04/12.
//  Copyright (c) 2014年 Hiromasa Kato. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OTKAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
