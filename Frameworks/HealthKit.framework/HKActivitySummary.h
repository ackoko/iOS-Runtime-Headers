/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKActivitySummary : NSObject <NSCopying, NSSecureCoding> {
    HKQuantity *_activeEnergyBurned;
    HKQuantity *_activeEnergyBurnedGoal;
    long long _activitySummaryIndex;
    HKQuantity *_appleExerciseTime;
    HKQuantity *_appleExerciseTimeGoal;
    HKQuantity *_appleStandHours;
    HKQuantity *_appleStandHoursGoal;
    NSDate *_creationDate;
    BOOL _dataLoading;
    NSDateComponents *_dateComponents;
    HKQuantity *_distanceWalkingRunning;
    NSDate *_endDate;
    NSDate *_energyBurnedGoalDate;
    NSDate *_startDate;
    HKQuantity *_stepCount;
}

@property (nonatomic, retain) HKQuantity *activeEnergyBurned;
@property (nonatomic, retain) HKQuantity *activeEnergyBurnedGoal;
@property (getter=_activeEnergyCompletionPercentage, nonatomic, readonly) double activeEnergyCompletionPercentage;
@property (getter=_activitySummaryIndex, setter=_setActivitySummaryIndex:, nonatomic) long long activitySummaryIndex;
@property (nonatomic, retain) HKQuantity *appleExerciseTime;
@property (nonatomic, retain) HKQuantity *appleExerciseTimeGoal;
@property (nonatomic, retain) HKQuantity *appleStandHours;
@property (nonatomic, retain) HKQuantity *appleStandHoursGoal;
@property (getter=_creationDate, setter=_setCreationDate:, nonatomic, retain) NSDate *creationDate;
@property (getter=_isDataLoading, setter=_setDataLoading:, nonatomic) BOOL dataLoading;
@property (nonatomic, retain) HKQuantity *distanceWalkingRunning;
@property (getter=_endDate, setter=_setEndDate:, nonatomic, retain) NSDate *endDate;
@property (getter=_energyBurnedGoalDate, setter=_setEnergyBurnedGoalDate:, nonatomic, retain) NSDate *energyBurnedGoalDate;
@property (getter=_exerciseTimeCompletionPercentage, nonatomic, readonly) double exerciseTimeCompletionPercentage;
@property (getter=_gregorianDateComponents, setter=_setGregorianDateComponents:, nonatomic, copy) NSDateComponents *gregorianDateComponents;
@property (getter=_standHoursCompletionPercentage, nonatomic, readonly) double standHoursCompletionPercentage;
@property (getter=_startDate, setter=_setStartDate:, nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) HKQuantity *stepCount;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_highestEnergyBurnedActivityCacheAmongCaches:(id)arg1;
+ (id)_mostSignificantCacheAmongCaches:(id)arg1;
+ (BOOL)_validateActivitySummaryDateComponents:(id)arg1 errorMessage:(id*)arg2;
+ (BOOL)_validateActivitySummaryDateComponentsRange:(id)arg1 endDateComponents:(id)arg2 errorMessage:(id*)arg3;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_activeEnergyCompletionPercentage;
- (long long)_activitySummaryIndex;
- (BOOL)_allFieldsAreEqual:(id)arg1;
- (id)_creationDate;
- (id)_decodeQuantityFromCoder:(id)arg1 forKey:(id)arg2 unit:(id)arg3;
- (void)_encodeQuantity:(id)arg1 withCoder:(id)arg2 key:(id)arg3 unit:(id)arg4;
- (id)_endDate;
- (id)_energyBurnedGoalDate;
- (double)_exerciseTimeCompletionPercentage;
- (id)_gregorianDateComponents;
- (id)_initWithActivityCache:(id)arg1 shouldIncludePrivateProperties:(BOOL)arg2;
- (BOOL)_isDataLoading;
- (double)_percentageCompleteWithQuantity:(id)arg1 goalQuantity:(id)arg2 unit:(id)arg3;
- (void)_setActivitySummaryIndex:(long long)arg1;
- (void)_setCreationDate:(id)arg1;
- (void)_setDataLoading:(BOOL)arg1;
- (void)_setEndDate:(id)arg1;
- (void)_setEnergyBurnedGoalDate:(id)arg1;
- (void)_setGregorianDateComponents:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (double)_standHoursCompletionPercentage;
- (id)_startDate;
- (void)_validateQuantityAssignment:(id)arg1 expectedUnit:(id)arg2 propertyName:(id)arg3;
- (id)activeEnergyBurned;
- (id)activeEnergyBurnedGoal;
- (id)appleExerciseTime;
- (id)appleExerciseTimeGoal;
- (id)appleStandHours;
- (id)appleStandHoursGoal;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateComponentsForCalendar:(id)arg1;
- (id)description;
- (id)distanceWalkingRunning;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setActiveEnergyBurned:(id)arg1;
- (void)setActiveEnergyBurnedGoal:(id)arg1;
- (void)setAppleExerciseTime:(id)arg1;
- (void)setAppleExerciseTimeGoal:(id)arg1;
- (void)setAppleStandHours:(id)arg1;
- (void)setAppleStandHoursGoal:(id)arg1;
- (void)setDistanceWalkingRunning:(id)arg1;
- (void)setStepCount:(id)arg1;
- (id)stepCount;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (BOOL)hd_isEnergyBurnedGoalSet;

@end