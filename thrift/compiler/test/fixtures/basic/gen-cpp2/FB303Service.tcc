/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/FB303Service.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace test { namespace fixtures { namespace basic {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int32_t*>> FB303Service_simple_rpc_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::structure, ::test::fixtures::basic::ReservedKeyword*>> FB303Service_simple_rpc_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void FB303ServiceAsyncProcessor::setUpAndProcess_simple_rpc(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, FOLLY_MAYBE_UNUSED apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &FB303ServiceAsyncProcessor::executeRequest_simple_rpc<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void FB303ServiceAsyncProcessor::executeRequest_simple_rpc(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::test::fixtures::basic::FB303Service_simple_rpc_pargs args;
  ::std::int32_t uarg_int_parameter{0};
  args.get<0>().value = &uarg_int_parameter;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "FB303Service.simple_rpc", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "simple_rpc", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "simple_rpc");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr<::test::fixtures::basic::ReservedKeyword>>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_simple_rpc<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_simple_rpc<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_simple_rpc(std::move(callback), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse FB303ServiceAsyncProcessor::return_simple_rpc(apache::thrift::ContextStack* ctx, ::test::fixtures::basic::ReservedKeyword const& _return) {
  ProtocolOut_ prot;
  ::test::fixtures::basic::FB303Service_simple_rpc_presult result;
  result.get<0>().value = const_cast<::test::fixtures::basic::ReservedKeyword*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void FB303ServiceAsyncProcessor::throw_wrapped_simple_rpc(apache::thrift::ResponseChannelRequest::UniquePtr req,FOLLY_MAYBE_UNUSED int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "simple_rpc");
    return;
  }
}


}}} // test::fixtures::basic
