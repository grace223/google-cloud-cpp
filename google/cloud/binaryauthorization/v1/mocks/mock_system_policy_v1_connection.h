// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/binaryauthorization/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_MOCKS_MOCK_SYSTEM_POLICY_V1_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_MOCKS_MOCK_SYSTEM_POLICY_V1_CONNECTION_H

#include "google/cloud/binaryauthorization/v1/system_policy_v1_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace binaryauthorization_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `SystemPolicyV1Connection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `SystemPolicyV1Client`. To do so,
 * construct an object of type `SystemPolicyV1Client` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockSystemPolicyV1Connection
    : public binaryauthorization_v1::SystemPolicyV1Connection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::binaryauthorization::v1::Policy>, GetSystemPolicy,
      (google::cloud::binaryauthorization::v1::GetSystemPolicyRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_MOCKS_MOCK_SYSTEM_POLICY_V1_CONNECTION_H
