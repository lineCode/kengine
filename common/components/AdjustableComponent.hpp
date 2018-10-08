#pragma once

#include "SerializableComponent.hpp"

namespace kengine {
	class AdjustableComponent : public kengine::SerializableComponent<AdjustableComponent> {
	public:
		AdjustableComponent() = default;

		AdjustableComponent(const std::string & name, std::string * s) : name(name), sPtr(s), s(*s), adjustableType(String) {}
		AdjustableComponent(const std::string & name, bool * b) : name(name), bPtr(b), b(*b), adjustableType(Bool) {}
		AdjustableComponent(const std::string & name, double * d) : name(name), dPtr(d), d(*d), adjustableType(Double) {}
		AdjustableComponent(const std::string & name, int * i) : name(name), iPtr(i), i(*i), adjustableType(Int) {}

		AdjustableComponent(const std::string & name, const std::string & s) : name(name), s(s), adjustableType(String) {}
		AdjustableComponent(const std::string & name, bool b) : name(name), b(b), adjustableType(Bool) {}
		AdjustableComponent(const std::string & name, double d) : name(name), d(d), adjustableType(Double) {}
		AdjustableComponent(const std::string & name, int i) : name(name), i(i), adjustableType(Int) {}

		std::string name;

		std::string * sPtr = nullptr;
		bool * bPtr = nullptr;
		double * dPtr = nullptr;
		int * iPtr = nullptr;

		std::string s;
		bool b;
		double d;
		int i;

		enum EType
		{
			String,
			Bool,
			Double,
			Int
		};

		int adjustableType;

	public:
		pmeta_get_class_name(AdjustableComponent);
		pmeta_get_attributes();
	};
}