// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#include "NJSHttpUrlConnection.hpp"

using namespace v8;
using namespace node;
using namespace std;

int32_t NJSHttpUrlConnection::getStatusCode()
{
    //Wrap parameters
    Handle<Value> args[0] = {};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSHttpUrlConnection::getStatusCode fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getStatusCode").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_getStatusCode = Nan::CallAsFunction(calling_funtion->ToObject(),handle,0,args);
    if(result_getStatusCode.IsEmpty())
    {
        Nan::ThrowError("NJSHttpUrlConnection::getStatusCode call failed");
    }
    auto checkedResult_getStatusCode = result_getStatusCode.ToLocalChecked();
    auto fResult_getStatusCode = Nan::To<int32_t>(checkedResult_getStatusCode).FromJust();
    return fResult_getStatusCode;
}

std::string NJSHttpUrlConnection::getStatusText()
{
    //Wrap parameters
    Handle<Value> args[0] = {};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSHttpUrlConnection::getStatusText fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getStatusText").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_getStatusText = Nan::CallAsFunction(calling_funtion->ToObject(),handle,0,args);
    if(result_getStatusText.IsEmpty())
    {
        Nan::ThrowError("NJSHttpUrlConnection::getStatusText call failed");
    }
    auto checkedResult_getStatusText = result_getStatusText.ToLocalChecked();
    String::Utf8Value string_fResult_getStatusText(checkedResult_getStatusText->ToString());
    auto fResult_getStatusText = std::string(*string_fResult_getStatusText);
    return fResult_getStatusText;
}

std::unordered_map<std::string, std::string> NJSHttpUrlConnection::getHeaders()
{
    //Wrap parameters
    Handle<Value> args[0] = {};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSHttpUrlConnection::getHeaders fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getHeaders").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_getHeaders = Nan::CallAsFunction(calling_funtion->ToObject(),handle,0,args);
    if(result_getHeaders.IsEmpty())
    {
        Nan::ThrowError("NJSHttpUrlConnection::getHeaders call failed");
    }
    auto checkedResult_getHeaders = result_getHeaders.ToLocalChecked();
    map<std::string, std::string> fResult_getHeaders;
    Local<Map> fResult_getHeaders_container = Local<Map>::Cast(checkedResult_getHeaders);
    auto fResult_getHeaders_prop_names = fResult_getHeaders_container->GetPropertyNames();
    for(uint32_t i = 0; i < fResult_getHeaders_prop_names->Length(); i++)
    {
        auto key = fResult_getHeaders_prop_names->Get(i);
        if(key->IsString() && fResult_getHeaders_container->Get(key)->IsString())
        {
            String::Utf8Value string_fResult_getHeaders_key(key->ToString()->ToString());
            auto fResult_getHeaders_key = std::string(*string_fResult_getHeaders_key);
            String::Utf8Value string_fResult_getHeaders_value(fResult_getHeaders_container->Get(key)->ToString()->ToString());
            auto fResult_getHeaders_value = std::string(*string_fResult_getHeaders_value);
            fResult_getHeaders.emplace(fResult_getHeaders_key,fResult_getHeaders_value);
        }
    }

    return fResult_getHeaders;
}

HttpReadBodyResult NJSHttpUrlConnection::readBody()
{
    //Wrap parameters
    Handle<Value> args[0] = {};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSHttpUrlConnection::readBody fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("readBody").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_readBody = Nan::CallAsFunction(calling_funtion->ToObject(),handle,0,args);
    if(result_readBody.IsEmpty())
    {
        Nan::ThrowError("NJSHttpUrlConnection::readBody call failed");
    }
    auto checkedResult_readBody = result_readBody.ToLocalChecked();

    auto field_fResult_readBody_1 = Nan::Get(checkedResult_readBody->ToObject(), Nan::New<String>("error").ToLocalChecked()).ToLocalChecked();
    std::experimental::optional

    auto field_fResult_readBody_2 = Nan::Get(checkedResult_readBody->ToObject(), Nan::New<String>("data").ToLocalChecked()).ToLocalChecked();
    std::experimental::optional
    HttpReadBodyResult fResult_readBody(fResult_readBody_1, fResult_readBody_2);

    return fResult_readBody;
}

NAN_METHOD(NJSHttpUrlConnection::addRef) {

    NJSHttpUrlConnection *obj = Nan::ObjectWrap::Unwrap<NJSHttpUrlConnection>(info.This());
    obj->Ref();
}

NAN_METHOD(NJSHttpUrlConnection::removeRef) {

    NJSHttpUrlConnection *obj = Nan::ObjectWrap::Unwrap<NJSHttpUrlConnection>(info.This());
    obj->Unref();
}

NAN_METHOD(NJSHttpUrlConnection::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSHttpUrlConnection function can only be called as constructor (use New)");
    }

    NJSHttpUrlConnection *node_instance = nullptr;
    if(info[0]->IsObject())
    {
        node_instance = new NJSHttpUrlConnection(info[0]->ToObject());
    }
    else
    {
        return Nan::ThrowError("NJSHttpUrlConnection::New requires an implementation from node");
    }

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}

void NJSHttpUrlConnection::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSHttpUrlConnection::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSHttpUrlConnection").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"addRef", addRef);
    Nan::SetPrototypeMethod(func_template,"removeRef", removeRef);

    //Add template to target
    target->Set(Nan::New<String>("NJSHttpUrlConnection").ToLocalChecked(), func_template->GetFunction());
}
