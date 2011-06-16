#ifndef INCLUDE_config_h__
#define INCLUDE_config_h__

#include "git2.h"
#include "git2/config.h"
#include "vector.h"

#define GIT_CONFIG_FILENAME ".gitconfig"
#define GIT_CONFIG_FILENAME_INREPO "config"

#define GIT_CONFIG_KEY_CORE "core"
#define GIT_CONFIG_KEY_REPOSITORY_FORMAT_VERSION GIT_CONFIG_KEY_CORE ".repositoryformatversion"
#define GIT_CONFIG_KEY_IS_BARE GIT_CONFIG_KEY_CORE ".isbare"

struct git_config {
	git_vector files;
};

#endif
