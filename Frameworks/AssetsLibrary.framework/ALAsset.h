/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */



@interface ALAsset : NSObject 
{
    id _internal;
}

@property(retain) ALAssetPrivate *internal;


- (struct CGImage { }*)thumbnail;
- (BOOL)isValid;
- (id)valueForProperty:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)internal;
- (void)setInternal:(id)arg1;
- (id)initWithMLPhoto:(id)arg1 library:(id)arg2;
- (id)_typeAsString;
- (id)defaultRepresentation;
- (id)representationForUTI:(id)arg1;

@end