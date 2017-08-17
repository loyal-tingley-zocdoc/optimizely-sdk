/****************************************************************************
 * Copyright 2017, Optimizely, Inc. and contributors                        *
 *                                                                          *
 * Licensed under the Apache License, Version 2.0 (the "License");          *
 * you may not use this file except in compliance with the License.         *
 * You may obtain a copy of the License at                                  *
 *                                                                          *
 *    http://www.apache.org/licenses/LICENSE-2.0                            *
 *                                                                          *
 * Unless required by applicable law or agreed to in writing, software      *
 * distributed under the License is distributed on an "AS IS" BASIS,        *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 * See the License for the specific language governing permissions and      *
 * limitations under the License.                                           *
 ***************************************************************************/

/*
 * The value mapped to the experiment key
 * in the experimentBucketMap of the User Profile entity:
 * {
 *	"user_id" : "alda",
 *	"experiment_bucket_map" : {
 *		"experiment_id_1" : {
 *			"variation_id" : "variation_id_1"
 *		},
 *		"experiment_id_2" : {
 *			"variation_id" : "variation_id_2"
 *		}
 *	}
 * }
 */
#import <Foundation/Foundation.h>
#ifdef UNIVERSAL
    #import "OPJMModelLib.h"
#else
    #import <OptimizelySDKCore/OPJMModelLib.h>
#endif

@interface OPTLYExperimentBucketMapEntity : OPJMModel

/// variation id
@property (nonatomic, strong) NSString *variation_id;

@end
