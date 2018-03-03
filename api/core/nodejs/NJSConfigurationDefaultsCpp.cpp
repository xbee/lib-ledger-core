// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#include "NJSConfigurationDefaultsCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSConfigurationDefaults::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSConfigurationDefaults function can only be called as constructor (use New)");
    }
    NJSConfigurationDefaults *node_instance = new NJSConfigurationDefaults(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSConfigurationDefaults::ConfigurationDefaults_prototype;

Handle<Object> NJSConfigurationDefaults::wrap(const std::shared_ptr<ledger::core::api::ConfigurationDefaults> &object) {
    Local<ObjectTemplate> local_prototype = Nan::New(ConfigurationDefaults_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSConfigurationDefaults *new_obj = new NJSConfigurationDefaults(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSConfigurationDefaults::wrap: object template not valid");
    }
    return obj;
}

void NJSConfigurationDefaults::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSConfigurationDefaults::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSConfigurationDefaults").ToLocalChecked());

    //SetPrototypeMethod all methods
    //Set object prototype
    ConfigurationDefaults_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSConfigurationDefaults").ToLocalChecked(), func_template->GetFunction());
}
