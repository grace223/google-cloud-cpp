// Copyright 2023 Google LLC
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
// source: google/cloud/tpu/v2/cloud_tpu.proto

#include "google/cloud/tpu/v2/tpu_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace tpu_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

TpuConnectionIdempotencyPolicy::~TpuConnectionIdempotencyPolicy() = default;

std::unique_ptr<TpuConnectionIdempotencyPolicy>
TpuConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<TpuConnectionIdempotencyPolicy>(*this);
}

Idempotency TpuConnectionIdempotencyPolicy::ListNodes(
    google::cloud::tpu::v2::ListNodesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency TpuConnectionIdempotencyPolicy::GetNode(
    google::cloud::tpu::v2::GetNodeRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TpuConnectionIdempotencyPolicy::CreateNode(
    google::cloud::tpu::v2::CreateNodeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TpuConnectionIdempotencyPolicy::DeleteNode(
    google::cloud::tpu::v2::DeleteNodeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TpuConnectionIdempotencyPolicy::StopNode(
    google::cloud::tpu::v2::StopNodeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TpuConnectionIdempotencyPolicy::StartNode(
    google::cloud::tpu::v2::StartNodeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TpuConnectionIdempotencyPolicy::UpdateNode(
    google::cloud::tpu::v2::UpdateNodeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TpuConnectionIdempotencyPolicy::GenerateServiceIdentity(
    google::cloud::tpu::v2::GenerateServiceIdentityRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TpuConnectionIdempotencyPolicy::ListAcceleratorTypes(
    google::cloud::tpu::v2::ListAcceleratorTypesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency TpuConnectionIdempotencyPolicy::GetAcceleratorType(
    google::cloud::tpu::v2::GetAcceleratorTypeRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TpuConnectionIdempotencyPolicy::ListRuntimeVersions(
    google::cloud::tpu::v2::ListRuntimeVersionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency TpuConnectionIdempotencyPolicy::GetRuntimeVersion(
    google::cloud::tpu::v2::GetRuntimeVersionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TpuConnectionIdempotencyPolicy::GetGuestAttributes(
    google::cloud::tpu::v2::GetGuestAttributesRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<TpuConnectionIdempotencyPolicy>
MakeDefaultTpuConnectionIdempotencyPolicy() {
  return absl::make_unique<TpuConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v2
}  // namespace cloud
}  // namespace google
