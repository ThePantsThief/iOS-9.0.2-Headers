/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSAKSerializer : NSObject {

	id ss;

}
-(unsigned long long)serializeData:(id)arg1 ;
-(unsigned long long)serializeList:(id)arg1 ;
-(unsigned long long)serializePropertyList:(id)arg1 ;
-(unsigned long long)serializeString:(id)arg1 ;
-(unsigned long long)serializeListItemIn:(id)arg1 at:(unsigned long long)arg2 ;
-(unsigned long long)serializeObject:(id)arg1 ;
-(unsigned long long)serializePListKeyIn:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(unsigned long long)serializePListValueIn:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)initForSerializerStream:(id)arg1 ;
-(id)serializerStream;
-(void)dealloc;
@end
