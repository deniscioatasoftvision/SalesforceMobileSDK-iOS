/*
 SFSDKOAuthClientConfig.h
 SalesforceSDKCore

 Created by Raj Rao on 8/25/17.

 Copyright (c) 2017-present, salesforce.com, inc. All rights reserved.

 Redistribution and use of this software in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice, this list of conditions
 and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice, this list of
 conditions and the following disclaimer in the documentation and/or other materials provided
 with the distribution.
 * Neither the name of salesforce.com, inc. nor the names of its contributors may be used to
 endorse or promote products derived from this software without specific prior written
 permission of salesforce.com, inc.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY
 WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#import <Foundation/Foundation.h>
#import "SFOAuthCoordinator.h"
#import "SFSDKOAuthClientContext.h"

@class SFOAuthInfo;
@class SFLoginViewController;
@class SFSDKOAuthViewHandler;
@class SFSDKWindowContainer;
@class SFSDKOAuthClientAdvanced;
@class SFSDKOAuthClientIDP;
@class SFAuthErrorHandlerList;
@class SFAuthErrorHandler;

@interface SFSDKOAuthClientConfig : NSObject

@property (nonatomic, copy, nonnull) NSString *loginHost;
@property (nonatomic, copy, nonnull) NSSet<NSString*> *scopes;

@property (nonatomic, weak,nullable) id<SFSDKOAuthClientSafariViewDelegate> safariViewDelegate;
@property (nonatomic, weak,nullable) id<SFSDKOAuthClientWebViewDelegate> webViewDelegate;
@property (nonatomic, weak,nullable) id<SFSDKOAuthClientDelegate> delegate;

@property (nonatomic, copy,nullable) SFAuthenticationSuccessCallbackBlock successCallbackBlock;
@property (nonatomic, copy,nullable) SFAuthenticationFailureCallbackBlock  failureCallbackBlock;
@property (nonatomic, copy,nullable) SFIdentitySuccessCallbackBlock identitySuccessCallbackBlock;
@property (nonatomic, copy,nullable) SFIdentityFailureCallbackBlock identityFailureCallbackBlock;
@property (nonatomic, copy,nullable) SFOAuthBrowserFlowCallbackBlock authCoordinatorBrowserBlock;

@property (nonatomic, assign) SFOAuthAdvancedAuthConfiguration advancedAuthConfiguration;
@property (nonatomic, strong, nullable) NSArray * additionalOAuthParameterKeys;
@property (nonatomic, strong, nullable) NSDictionary *  additionalTokenRefreshParams;
@property (nonatomic, strong, nullable) SFAuthErrorHandler *invalidCredentialsAuthErrorHandler;
@property (nonatomic, strong, nullable) SFAuthErrorHandler *connectedAppVersionAuthErrorHandler;
@property (nonatomic, strong, nullable) SFAuthErrorHandler *networkFailureAuthErrorHandler;
@property (nonatomic, strong, nullable) SFAuthErrorHandler *genericAuthErrorHandler;
@property (nonatomic, strong, nullable) SFAuthErrorHandlerList *authErrorHandlerList;
@property (nonatomic, strong, nullable) SFSDKOAuthViewHandler *authViewHandler;
@property (nonatomic, strong, nullable) UIAlertController *statusAlert;
/**
 The view controller used to present the authentication dialog.
 */
@property (nonatomic, strong, nullable) SFLoginViewController *authViewController;

@end