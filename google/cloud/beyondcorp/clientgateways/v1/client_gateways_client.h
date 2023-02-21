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
// source:
// google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTGATEWAYS_V1_CLIENT_GATEWAYS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTGATEWAYS_V1_CLIENT_GATEWAYS_CLIENT_H

#include "google/cloud/beyondcorp/clientgateways/v1/client_gateways_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_clientgateways_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// API Overview:
///
/// The `beyondcorp.googleapis.com` service implements the Google Cloud
/// BeyondCorp API.
///
/// Data Model:
///
/// The ClientGatewaysService exposes the following resources:
///
/// * Client Gateways, named as follows:
///   `projects/{project_id}/locations/{location_id}/clientGateways/{client_gateway_id}`.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class ClientGatewaysServiceClient {
 public:
  explicit ClientGatewaysServiceClient(
      std::shared_ptr<ClientGatewaysServiceConnection> connection,
      Options opts = {});
  ~ClientGatewaysServiceClient();

  ///@{
  /// @name Copy and move support
  ClientGatewaysServiceClient(ClientGatewaysServiceClient const&) = default;
  ClientGatewaysServiceClient& operator=(ClientGatewaysServiceClient const&) =
      default;
  ClientGatewaysServiceClient(ClientGatewaysServiceClient&&) = default;
  ClientGatewaysServiceClient& operator=(ClientGatewaysServiceClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ClientGatewaysServiceClient const& a,
                         ClientGatewaysServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ClientGatewaysServiceClient const& a,
                         ClientGatewaysServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists ClientGateways in a given project and location.
  ///
  /// @param parent  Required. Parent value for ListClientGatewaysRequest.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientgateways::v1::ClientGateway,google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L97}
  ///
  /// [google.cloud.beyondcorp.clientgateways.v1.ClientGateway]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L97}
  /// [google.cloud.beyondcorp.clientgateways.v1.ListClientGatewaysRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L153}
  ///
  StreamRange<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>
  ListClientGateways(std::string const& parent, Options opts = {});

  ///
  /// Lists ClientGateways in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::clientgateways::v1::ListClientGatewaysRequest,google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L153}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientgateways::v1::ClientGateway,google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L97}
  ///
  /// [google.cloud.beyondcorp.clientgateways.v1.ClientGateway]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L97}
  /// [google.cloud.beyondcorp.clientgateways.v1.ListClientGatewaysRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L153}
  ///
  StreamRange<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>
  ListClientGateways(
      google::cloud::beyondcorp::clientgateways::v1::ListClientGatewaysRequest
          request,
      Options opts = {});

  ///
  /// Gets details of a single ClientGateway.
  ///
  /// @param name  Required. Name of the resource
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientgateways::v1::ClientGateway,google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L97}
  ///
  /// [google.cloud.beyondcorp.clientgateways.v1.ClientGateway]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L97}
  /// [google.cloud.beyondcorp.clientgateways.v1.GetClientGatewayRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L189}
  ///
  StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>
  GetClientGateway(std::string const& name, Options opts = {});

  ///
  /// Gets details of a single ClientGateway.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::clientgateways::v1::GetClientGatewayRequest,google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L189}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientgateways::v1::ClientGateway,google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L97}
  ///
  /// [google.cloud.beyondcorp.clientgateways.v1.ClientGateway]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L97}
  /// [google.cloud.beyondcorp.clientgateways.v1.GetClientGatewayRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L189}
  ///
  StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>
  GetClientGateway(google::cloud::beyondcorp::clientgateways::v1::
                       GetClientGatewayRequest const& request,
                   Options opts = {});

  ///
  /// Creates a new ClientGateway in a given project and location.
  ///
  /// @param parent  Required. Value for parent.
  /// @param client_gateway  Required. The resource being created.
  /// @param client_gateway_id  Optional. User-settable client gateway resource
  /// ID.
  ///   * Must start with a letter.
  ///   * Must contain between 4-63 characters from `/[a-z][0-9]-/`.
  ///   * Must end with a number or a letter.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientgateways::v1::ClientGateway,google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L97}
  ///
  /// [google.cloud.beyondcorp.clientgateways.v1.ClientGateway]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L97}
  /// [google.cloud.beyondcorp.clientgateways.v1.CreateClientGatewayRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L200}
  ///
  future<StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>>
  CreateClientGateway(
      std::string const& parent,
      google::cloud::beyondcorp::clientgateways::v1::ClientGateway const&
          client_gateway,
      std::string const& client_gateway_id, Options opts = {});

  ///
  /// Creates a new ClientGateway in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::clientgateways::v1::CreateClientGatewayRequest,google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L200}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientgateways::v1::ClientGateway,google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L97}
  ///
  /// [google.cloud.beyondcorp.clientgateways.v1.ClientGateway]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L97}
  /// [google.cloud.beyondcorp.clientgateways.v1.CreateClientGatewayRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L200}
  ///
  future<StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>>
  CreateClientGateway(google::cloud::beyondcorp::clientgateways::v1::
                          CreateClientGatewayRequest const& request,
                      Options opts = {});

  ///
  /// Deletes a single ClientGateway.
  ///
  /// @param name  Required. Name of the resource
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientgateways::v1::ClientGatewayOperationMetadata,google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L269}
  ///
  /// [google.cloud.beyondcorp.clientgateways.v1.ClientGatewayOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L269}
  /// [google.cloud.beyondcorp.clientgateways.v1.DeleteClientGatewayRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L239}
  ///
  future<StatusOr<google::cloud::beyondcorp::clientgateways::v1::
                      ClientGatewayOperationMetadata>>
  DeleteClientGateway(std::string const& name, Options opts = {});

  ///
  /// Deletes a single ClientGateway.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::beyondcorp::clientgateways::v1::DeleteClientGatewayRequest,google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L239}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::beyondcorp::clientgateways::v1::ClientGatewayOperationMetadata,google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L269}
  ///
  /// [google.cloud.beyondcorp.clientgateways.v1.ClientGatewayOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L269}
  /// [google.cloud.beyondcorp.clientgateways.v1.DeleteClientGatewayRequest]:
  /// @googleapis_reference_link{google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto#L239}
  ///
  future<StatusOr<google::cloud::beyondcorp::clientgateways::v1::
                      ClientGatewayOperationMetadata>>
  DeleteClientGateway(google::cloud::beyondcorp::clientgateways::v1::
                          DeleteClientGatewayRequest const& request,
                      Options opts = {});

 private:
  std::shared_ptr<ClientGatewaysServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_clientgateways_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTGATEWAYS_V1_CLIENT_GATEWAYS_CLIENT_H
