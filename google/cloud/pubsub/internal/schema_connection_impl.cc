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
// source: google/pubsub/v1/schema.proto

#include "google/cloud/pubsub/internal/schema_connection_impl.h"
#include "google/cloud/pubsub/internal/schema_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SchemaServiceConnectionImpl::SchemaServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<pubsub_internal::SchemaServiceStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      SchemaServiceConnection::options())) {}

StatusOr<google::pubsub::v1::Schema> SchemaServiceConnectionImpl::CreateSchema(
    google::pubsub::v1::CreateSchemaRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateSchema(request),
      [this](grpc::ClientContext& context,
             google::pubsub::v1::CreateSchemaRequest const& request) {
        return stub_->CreateSchema(context, request);
      },
      request, __func__);
}

StatusOr<google::pubsub::v1::Schema> SchemaServiceConnectionImpl::GetSchema(
    google::pubsub::v1::GetSchemaRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetSchema(request),
      [this](grpc::ClientContext& context,
             google::pubsub::v1::GetSchemaRequest const& request) {
        return stub_->GetSchema(context, request);
      },
      request, __func__);
}

StreamRange<google::pubsub::v1::Schema>
SchemaServiceConnectionImpl::ListSchemas(
    google::pubsub::v1::ListSchemasRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<pubsub::SchemaServiceRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListSchemas(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::pubsub::v1::Schema>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::pubsub::v1::ListSchemasRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::pubsub::v1::ListSchemasRequest const& request) {
              return stub->ListSchemas(context, request);
            },
            r, function_name);
      },
      [](google::pubsub::v1::ListSchemasResponse r) {
        std::vector<google::pubsub::v1::Schema> result(r.schemas().size());
        auto& messages = *r.mutable_schemas();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::pubsub::v1::Schema>
SchemaServiceConnectionImpl::ListSchemaRevisions(
    google::pubsub::v1::ListSchemaRevisionsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<pubsub::SchemaServiceRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListSchemaRevisions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::pubsub::v1::Schema>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::pubsub::v1::ListSchemaRevisionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::pubsub::v1::ListSchemaRevisionsRequest const& request) {
              return stub->ListSchemaRevisions(context, request);
            },
            r, function_name);
      },
      [](google::pubsub::v1::ListSchemaRevisionsResponse r) {
        std::vector<google::pubsub::v1::Schema> result(r.schemas().size());
        auto& messages = *r.mutable_schemas();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::pubsub::v1::Schema> SchemaServiceConnectionImpl::CommitSchema(
    google::pubsub::v1::CommitSchemaRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CommitSchema(request),
      [this](grpc::ClientContext& context,
             google::pubsub::v1::CommitSchemaRequest const& request) {
        return stub_->CommitSchema(context, request);
      },
      request, __func__);
}

StatusOr<google::pubsub::v1::Schema>
SchemaServiceConnectionImpl::RollbackSchema(
    google::pubsub::v1::RollbackSchemaRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->RollbackSchema(request),
      [this](grpc::ClientContext& context,
             google::pubsub::v1::RollbackSchemaRequest const& request) {
        return stub_->RollbackSchema(context, request);
      },
      request, __func__);
}

StatusOr<google::pubsub::v1::Schema>
SchemaServiceConnectionImpl::DeleteSchemaRevision(
    google::pubsub::v1::DeleteSchemaRevisionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteSchemaRevision(request),
      [this](grpc::ClientContext& context,
             google::pubsub::v1::DeleteSchemaRevisionRequest const& request) {
        return stub_->DeleteSchemaRevision(context, request);
      },
      request, __func__);
}

Status SchemaServiceConnectionImpl::DeleteSchema(
    google::pubsub::v1::DeleteSchemaRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteSchema(request),
      [this](grpc::ClientContext& context,
             google::pubsub::v1::DeleteSchemaRequest const& request) {
        return stub_->DeleteSchema(context, request);
      },
      request, __func__);
}

StatusOr<google::pubsub::v1::ValidateSchemaResponse>
SchemaServiceConnectionImpl::ValidateSchema(
    google::pubsub::v1::ValidateSchemaRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->ValidateSchema(request),
      [this](grpc::ClientContext& context,
             google::pubsub::v1::ValidateSchemaRequest const& request) {
        return stub_->ValidateSchema(context, request);
      },
      request, __func__);
}

StatusOr<google::pubsub::v1::ValidateMessageResponse>
SchemaServiceConnectionImpl::ValidateMessage(
    google::pubsub::v1::ValidateMessageRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->ValidateMessage(request),
      [this](grpc::ClientContext& context,
             google::pubsub::v1::ValidateMessageRequest const& request) {
        return stub_->ValidateMessage(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google
