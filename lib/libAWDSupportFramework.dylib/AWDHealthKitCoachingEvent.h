/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHealthKitCoachingEvent : PBCodable <NSCopying> {
    unsigned int _dismissReason;
    unsigned long long _duration;
    unsigned long long _eventTimestamp;
    unsigned int _eventType;
    AWDHealthKitCoachingFeatureGroup *_features;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _goalTypes;
    struct { 
        unsigned int duration : 1; 
        unsigned int eventTimestamp : 1; 
        unsigned int timestamp : 1; 
        unsigned int dismissReason : 1; 
        unsigned int eventType : 1; 
        unsigned int newGoal : 1; 
        unsigned int recommendedGoal : 1; 
    } _has;
    unsigned int _newGoal;
    unsigned int _recommendedGoal;
    unsigned long long _timestamp;
}

@property (nonatomic) unsigned int dismissReason;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long eventTimestamp;
@property (nonatomic) unsigned int eventType;
@property (nonatomic, retain) AWDHealthKitCoachingFeatureGroup *features;
@property (nonatomic, readonly) unsigned int*goalTypes;
@property (nonatomic, readonly) unsigned int goalTypesCount;
@property (nonatomic) BOOL hasDismissReason;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEventTimestamp;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic, readonly) BOOL hasFeatures;
@property (nonatomic) BOOL hasNewGoal;
@property (nonatomic) BOOL hasRecommendedGoal;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int newGoal;
@property (nonatomic) unsigned int recommendedGoal;
@property (nonatomic) unsigned long long timestamp;

- (void)addGoalType:(unsigned int)arg1;
- (void)clearGoalTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dismissReason;
- (unsigned long long)duration;
- (unsigned long long)eventTimestamp;
- (unsigned int)eventType;
- (id)features;
- (unsigned int)goalTypeAtIndex:(unsigned int)arg1;
- (unsigned int*)goalTypes;
- (unsigned int)goalTypesCount;
- (BOOL)hasDismissReason;
- (BOOL)hasDuration;
- (BOOL)hasEventTimestamp;
- (BOOL)hasEventType;
- (BOOL)hasFeatures;
- (BOOL)hasNewGoal;
- (BOOL)hasRecommendedGoal;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)newGoal;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)recommendedGoal;
- (void)setDismissReason:(unsigned int)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setEventTimestamp:(unsigned long long)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setFeatures:(id)arg1;
- (void)setGoalTypes:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setHasDismissReason:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasEventTimestamp:(BOOL)arg1;
- (void)setHasEventType:(BOOL)arg1;
- (void)setHasNewGoal:(BOOL)arg1;
- (void)setHasRecommendedGoal:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setNewGoal:(unsigned int)arg1;
- (void)setRecommendedGoal:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end