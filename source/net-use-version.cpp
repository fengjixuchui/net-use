//
// Net Use
//
// Copyright (c) 2019 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#include "net-use-version.hpp"

namespace NetUse {
	namespace Version {

		static const char *version_ = "1.0.0";
		static const char *build_ = "1";
		static const char *versionWithBuild_ = "1.0.0.1";
		static const char *datetime_ = "2019-08-22 22:42:10";

		const char *version() {
			return version_;
		};
		const char *build() {
			return build_;
		};
		const char *versionWithBuild() {
			return versionWithBuild_;
		};
		const char *datetime() {
			return datetime_;
		};

	};
};

