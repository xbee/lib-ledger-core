// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "NJSBitcoinLikePreparedTransactionCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSBitcoinLikePreparedTransactionCallback::onCallback(const std::experimental::optional<BitcoinLikePreparedTransaction> & result, const std::experimental::optional<Error> & error)
{
    //Wrap parameters
    auto arg_0 = Nan::New<Object>();
    auto arg_0_1 = Nan::New<Int32>((*result).version);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("version").ToLocalChecked(), arg_0_1);
    Local<Array> arg_0_2 = Nan::New<Array>();
    for(size_t i = 0; i < (*result).inputs.size(); i++)
    {
        auto arg_0_2_elem = NJSBitcoinLikeOutput::wrap((*result).inputs[i]);

        arg_0_2->Set((int)i,arg_0_2_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("inputs").ToLocalChecked(), arg_0_2);
    Local<Array> arg_0_3 = Nan::New<Array>();
    for(size_t i = 0; i < (*result).paths.size(); i++)
    {
        auto arg_0_3_elem = Nan::New<String>((*result).paths[i]).ToLocalChecked();
        arg_0_3->Set((int)i,arg_0_3_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("paths").ToLocalChecked(), arg_0_3);
    Local<Array> arg_0_4 = Nan::New<Array>();
    for(size_t i = 0; i < (*result).outputs.size(); i++)
    {
        auto arg_0_4_elem = NJSBitcoinLikeOutput::wrap((*result).outputs[i]);

        arg_0_4->Set((int)i,arg_0_4_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("outputs").ToLocalChecked(), arg_0_4);
    auto arg_0_5 = Nan::New<Int32>((*result).lockTime);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("lockTime").ToLocalChecked(), arg_0_5);

    auto arg_1 = Nan::New<Object>();
    auto arg_1_1 = Nan::New<Integer>((int)(*error).code);
    Nan::DefineOwnProperty(arg_1, Nan::New<String>("code").ToLocalChecked(), arg_1_1);
    auto arg_1_2 = Nan::New<String>((*error).message).ToLocalChecked();
    Nan::DefineOwnProperty(arg_1, Nan::New<String>("message").ToLocalChecked(), arg_1_2);

    Handle<Value> args[2] = {arg_0,arg_1};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSBitcoinLikePreparedTransactionCallback::onCallback fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("onCallback").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_onCallback = Nan::CallAsFunction(calling_funtion->ToObject(),handle,2,args);
    if(result_onCallback.IsEmpty())
    {
        Nan::ThrowError("NJSBitcoinLikePreparedTransactionCallback::onCallback call failed");
    }
}

NAN_METHOD(NJSBitcoinLikePreparedTransactionCallback::addRef) {

    NJSBitcoinLikePreparedTransactionCallback *obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikePreparedTransactionCallback>(info.This());
    obj->Ref();
}

NAN_METHOD(NJSBitcoinLikePreparedTransactionCallback::removeRef) {

    NJSBitcoinLikePreparedTransactionCallback *obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikePreparedTransactionCallback>(info.This());
    obj->Unref();
}

NAN_METHOD(NJSBitcoinLikePreparedTransactionCallback::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikePreparedTransactionCallback function can only be called as constructor (use New)");
    }

    NJSBitcoinLikePreparedTransactionCallback *node_instance = nullptr;
    if(info[0]->IsObject())
    {
        node_instance = new NJSBitcoinLikePreparedTransactionCallback(info[0]->ToObject());
    }
    else
    {
        return Nan::ThrowError("NJSBitcoinLikePreparedTransactionCallback::New requires an implementation from node");
    }

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}

void NJSBitcoinLikePreparedTransactionCallback::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikePreparedTransactionCallback::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikePreparedTransactionCallback").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"addRef", addRef);
    Nan::SetPrototypeMethod(func_template,"removeRef", removeRef);

    //Add template to target
    target->Set(Nan::New<String>("NJSBitcoinLikePreparedTransactionCallback").ToLocalChecked(), func_template->GetFunction());
}
