/*
 * Copyright (C) 2017 Twitter, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/**
 This header is private to the Twitter Kit SDK and not exposed for public SDK consumption
 */

#import <Foundation/Foundation.h>
#import <TwitterCore/TWTRScribeService.h>

@interface TWTRStubScribeService : TWTRScribeService

@property (nonatomic, readonly) TWTRScribeEvent *latestEvent;
@property (nonatomic, readonly, copy) NSMutableArray *latestEvents;

- (void)enqueueEvent:(TWTRScribeEvent *)event;
- (void)enqueueEvents:(NSArray *)events;
- (void)flush;

@end
