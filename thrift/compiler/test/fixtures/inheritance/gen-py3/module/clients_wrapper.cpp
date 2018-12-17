/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/clients_wrapper.h>

namespace cpp2 {


MyRootClientWrapper::MyRootClientWrapper(
    std::shared_ptr<::cpp2::MyRootAsyncClient> async_client,
    std::shared_ptr<apache::thrift::RequestChannel> channel) : 
    async_client(async_client),
      channel_(channel) {}

MyRootClientWrapper::~MyRootClientWrapper() {}

folly::Future<folly::Unit> MyRootClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [this] { disconnectInLoop(); });
}

void MyRootClientWrapper::disconnectInLoop() {
    channel_.reset();
    async_client.reset();
}

void MyRootClientWrapper::setPersistentHeader(const std::string& key, const std::string& value) {
    auto headerChannel = async_client->getHeaderChannel();
    if (headerChannel != nullptr) {
        headerChannel->setPersistentHeader(key, value);
    }
}


folly::Future<folly::Unit>
MyRootClientWrapper::do_root(
    apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_do_root, channel_);
  async_client->do_root(
    rpcOptions,
    std::move(callback)
  );
  return _future;
}


MyNodeClientWrapper::MyNodeClientWrapper(
    std::shared_ptr<::cpp2::MyNodeAsyncClient> async_client,
    std::shared_ptr<apache::thrift::RequestChannel> channel) : 
    MyRootClientWrapper(async_client, channel),
    async_client(async_client),
      channel_(channel) {}


folly::Future<folly::Unit> MyNodeClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [this] { disconnectInLoop(); });
}

void MyNodeClientWrapper::disconnectInLoop() {
    channel_.reset();
    async_client.reset();
    ::cpp2::MyRootClientWrapper::disconnectInLoop();
}



folly::Future<folly::Unit>
MyNodeClientWrapper::do_mid(
    apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_do_mid, channel_);
  async_client->do_mid(
    rpcOptions,
    std::move(callback)
  );
  return _future;
}


MyLeafClientWrapper::MyLeafClientWrapper(
    std::shared_ptr<::cpp2::MyLeafAsyncClient> async_client,
    std::shared_ptr<apache::thrift::RequestChannel> channel) : 
    MyNodeClientWrapper(async_client, channel),
    async_client(async_client),
      channel_(channel) {}


folly::Future<folly::Unit> MyLeafClientWrapper::disconnect() {
  return folly::via(
    this->async_client->getChannel()->getEventBase(),
    [this] { disconnectInLoop(); });
}

void MyLeafClientWrapper::disconnectInLoop() {
    channel_.reset();
    async_client.reset();
    ::cpp2::MyNodeClientWrapper::disconnectInLoop();
}



folly::Future<folly::Unit>
MyLeafClientWrapper::do_leaf(
    apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<folly::Unit>>(
    std::move(_promise), rpcOptions, async_client->recv_wrapped_do_leaf, channel_);
  async_client->do_leaf(
    rpcOptions,
    std::move(callback)
  );
  return _future;
}


} // namespace cpp2
