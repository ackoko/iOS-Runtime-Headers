/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAState : NSObject <NSCoding, NSCopying> {
    NSString * _basedOn;
    NSMutableArray * _elements;
    BOOL  _enabled;
    BOOL  _initial;
    BOOL  _locked;
    NSString * _name;
    double  _nextDelay;
    double  _previousDelay;
}

@property (copy) NSString *basedOn;
@property (nonatomic, copy) NSArray *elements;
@property (getter=isEnabled) BOOL enabled;
@property (getter=isInitial) BOOL initial;
@property (getter=isLocked, nonatomic) BOOL locked;
@property (nonatomic, copy) NSString *name;
@property double nextDelay;
@property double previousDelay;

+ (void)CAMLParserStartElement:(id)arg1;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void)addElement:(id)arg1;
- (id)basedOn;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)elements;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)foreachLayer:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEnabled;
- (BOOL)isInitial;
- (BOOL)isLocked;
- (id)name;
- (double)nextDelay;
- (double)previousDelay;
- (void)removeElement:(id)arg1;
- (void)setBasedOn:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setInitial:(BOOL)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setNextDelay:(double)arg1;
- (void)setPreviousDelay:(double)arg1;

@end
