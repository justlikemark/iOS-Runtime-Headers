/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing> {
    unsigned int mCount;
    float mPattern[6];
    float mPhase;
    int mType;
}

@property(readonly) unsigned int count;
@property(readonly) BOOL isDash;
@property(readonly) BOOL isRoundDash;
@property(readonly) float* pattern;
@property(readonly) int patternType;
@property(readonly) float phase;

+ (id)dashPatternWithSpacing:(float)arg1;
+ (id)emptyPattern;
+ (id)longDashPattern;
+ (id)mediumDashPattern;
+ (id)roundDashPattern;
+ (id)roundDashPatternWithSpacing:(float)arg1;
+ (id)shortDashPattern;
+ (id)solidPattern;
+ (id)strokePatternWithPattern:(const float*)arg1 count:(unsigned int)arg2 phase:(float)arg3;

- (void)applyToCAShapeLayer:(id)arg1;
- (void)applyToContext:(struct CGContext { }*)arg1 lineWidth:(float)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (unsigned int)hash;
- (void)i_applyToContext:(struct CGContext { }*)arg1 lineWidth:(float)arg2 capStyle:(unsigned int*)arg3;
- (id)initWithArchive:(const struct StrokePatternArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; int x3; float x4; struct RepeatedField<float> { float *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; unsigned int x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithPattern:(const float*)arg1 count:(unsigned int)arg2 phase:(float)arg3;
- (BOOL)isDash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRoundDash;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (void)p_applyToCAShapeLayer:(id)arg1 lineWidth:(float)arg2;
- (id)p_initWithType:(int)arg1 pattern:(const float*)arg2 count:(unsigned int)arg3 phase:(float)arg4;
- (float*)pattern;
- (int)patternType;
- (float)phase;
- (void)saveToArchive:(struct StrokePatternArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; int x3; float x4; struct RepeatedField<float> { float *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; unsigned int x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;

@end