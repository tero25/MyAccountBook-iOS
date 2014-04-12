#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class OTKItem;

@interface OTKGroup : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *items;
@end

@interface OTKGroup (CoreDataGeneratedAccessors)

- (void)addItemsObject:(OTKItem *)value;
- (void)removeItemsObject:(OTKItem *)value;
- (void)addItems:(NSSet *)values;
- (void)removeItems:(NSSet *)values;

@end
