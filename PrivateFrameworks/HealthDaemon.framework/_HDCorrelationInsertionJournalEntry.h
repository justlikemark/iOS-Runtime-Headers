/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSArray, NSUUID;

@interface _HDCorrelationInsertionJournalEntry : HDJournalEntry {
    NSUUID *_correlationUUID;
    NSArray *_objectUUIDs;
}

@property(readonly) NSUUID * correlationUUID;
@property(readonly) NSArray * objectUUIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)applyWithDaemon:(id)arg1;
- (id)correlationUUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCorrelationUUID:(id)arg1 objectUUIDs:(id)arg2;
- (id)objectUUIDs;

@end