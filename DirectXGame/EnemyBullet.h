﻿#pragma once
#include "Model.h"
#include "WorldTransform.h"


class EnemyBullet
{
public:

	//初期化
	void Initialize(Model* model, const Vector3& position, const Vector3& velocity);


	//更新処理
	void Update();


	//描画
	void Draw(const ViewProjection& viewProjection);


	bool IsDead() const { return isDead_; }

private:

	// ワールド変換データ
	WorldTransform worldTransform_;

	// モデル
	Model* model_ = nullptr;


	//テクスチャハンドル
	uint32_t EnemyBulletHandle_ = 0u;

	// 弾の速度
	Vector3 velocity_;


	// 寿命<frm>
	static const int32_t kLifeTime = 60 * 5;

	// デスタイマー
	int32_t deathTimer_ = kLifeTime;

	// デスフラグ
	bool isDead_ = false;

	
	
};