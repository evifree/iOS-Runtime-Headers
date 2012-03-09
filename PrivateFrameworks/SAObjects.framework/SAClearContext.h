/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAClearContext : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)clearContext;
+ (id)clearContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end