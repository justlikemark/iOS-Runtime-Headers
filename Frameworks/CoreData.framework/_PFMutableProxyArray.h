/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class _PFArray, NSMutableArray;



@interface _PFMutableProxyArray : NSMutableArray 
{
    NSInteger _cd_rc;
    NSUInteger _editCount;
    _PFArray *_originalArray;
    _PFArray *_originalIDs;
    NSMutableArray *_updatedObjectsArray;
    struct __CFArray { } *_indicesVeneer;
}


- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)finalize;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (NSUInteger)count;
- (id)retain;
- (void)release;
- (void)dealloc;
- (NSUInteger)retainCount;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (id)objectAtIndex:(NSUInteger)arg1;
- (void)addObject:(id)arg1;
- (id)initWithPFArray:(id)arg1;
- (NSUInteger)indexOfManagedObjectForObjectID:(id)arg1;
- (void)_rehash;
- (id)managedObjectIDAtIndex:(NSUInteger)arg1;
- (id)arrayFromObjectIDs;
- (id)newArrayFromObjectIDs;

@end