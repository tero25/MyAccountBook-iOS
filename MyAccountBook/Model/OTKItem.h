#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface OTKItem : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * price;
@property (nonatomic, retain) NSNumber * isDone;
@property (nonatomic, retain) NSDate * dueDate;
@property (nonatomic, retain) NSManagedObject *group;

@end
