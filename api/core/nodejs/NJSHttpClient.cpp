// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#include "NJSHttpClient.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSHttpClient::execute(const std::shared_ptr<HttpRequest> & request)
{
    //Wrap parameters
    auto arg_0 = NJSHttpRequest::wrap(request);

    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSHttpClient::execute fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("execute").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_execute = Nan::CallAsFunction(calling_funtion->ToObject(),handle,1,args);
    if(result_execute.IsEmpty())
    {
        Nan::ThrowError("NJSHttpClient::execute call failed");
    }
}

NAN_METHOD(NJSHttpClient::addRef) {

    NJSHttpClient *obj = Nan::ObjectWrap::Unwrap<NJSHttpClient>(info.This());
    obj->Ref();
}

NAN_METHOD(NJSHttpClient::removeRef) {

    NJSHttpClient *obj = Nan::ObjectWrap::Unwrap<NJSHttpClient>(info.This());
    obj->Unref();
}

NAN_METHOD(NJSHttpClient::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSHttpClient function can only be called as constructor (use New)");
    }

    NJSHttpClient *node_instance = nullptr;
    if(info[0]->IsObject())
    {
        node_instance = new NJSHttpClient(info[0]->ToObject());
    }
    else
    {
        return Nan::ThrowError("NJSHttpClient::New requires an implementation from node");
    }

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}

void NJSHttpClient::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSHttpClient::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSHttpClient").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"addRef", addRef);
    Nan::SetPrototypeMethod(func_template,"removeRef", removeRef);

    //Add template to target
    target->Set(Nan::New<String>("NJSHttpClient").ToLocalChecked(), func_template->GetFunction());
}
